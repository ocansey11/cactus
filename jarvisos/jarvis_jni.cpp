// JNI bridge for the JarvisOS system service.
// Java side: com.android.server.jarvis.inference.CactusWrapper (frameworks/base).
//
// Kept separate from android/cactus_jni.cpp (the com.cactus app bindings, which
// JarvisOS does not build) so upstream changes to that file never conflict.

#include <jni.h>

#include <string>
#include <vector>

#include "cactus_engine.h"

namespace {

constexpr size_t DEFAULT_BUFFER_SIZE = 65536;

const char* jstring_to_cstr(JNIEnv* env, jstring str) {
    return str != nullptr ? env->GetStringUTFChars(str, nullptr) : nullptr;
}

void release_jstring(JNIEnv* env, jstring str, const char* cstr) {
    if (str != nullptr && cstr != nullptr) env->ReleaseStringUTFChars(str, cstr);
}

std::string json_escape(const char* s) {
    std::string out;
    for (; s != nullptr && *s != '\0'; ++s) {
        switch (*s) {
            case '"': out += "\\\""; break;
            case '\\': out += "\\\\"; break;
            case '\n': out += "\\n"; break;
            case '\r': out += "\\r"; break;
            case '\t': out += "\\t"; break;
            default: out += *s;
        }
    }
    return out;
}

} // namespace

extern "C" {

JNIEXPORT jlong JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeInit(
        JNIEnv* env, jclass, jstring modelPath, jstring corpusDir, jboolean cacheIndex) {
    const char* path = jstring_to_cstr(env, modelPath);
    const char* corpus = jstring_to_cstr(env, corpusDir);
    jlong handle = reinterpret_cast<jlong>(cactus_init(path, corpus, cacheIndex == JNI_TRUE));
    release_jstring(env, modelPath, path);
    release_jstring(env, corpusDir, corpus);
    return handle;
}

JNIEXPORT void JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeDestroy(JNIEnv*, jclass, jlong handle) {
    if (handle != 0) {
        cactus_destroy(reinterpret_cast<cactus_model_t>(handle));
    }
}

JNIEXPORT jfloatArray JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeEmbed(
        JNIEnv* env, jclass, jlong handle, jstring text, jboolean normalize) {
    if (handle == 0) return nullptr;

    const char* textStr = jstring_to_cstr(env, text);
    std::vector<float> buffer(4096);
    size_t embeddingDim = 0;

    int result = cactus_embed(
        reinterpret_cast<cactus_model_t>(handle),
        textStr,
        buffer.data(),
        buffer.size() * sizeof(float),
        &embeddingDim,
        normalize == JNI_TRUE
    );

    release_jstring(env, text, textStr);

    if (result < 0 || embeddingDim == 0) return nullptr;

    jfloatArray jarray = env->NewFloatArray(static_cast<jsize>(embeddingDim));
    env->SetFloatArrayRegion(jarray, 0, static_cast<jsize>(embeddingDim), buffer.data());
    return jarray;
}

JNIEXPORT jlong JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeIndexInit(
        JNIEnv* env, jclass, jstring indexDir, jint embeddingDim) {
    const char* dir = jstring_to_cstr(env, indexDir);
    jlong handle = reinterpret_cast<jlong>(cactus_index_init(dir, static_cast<size_t>(embeddingDim)));
    release_jstring(env, indexDir, dir);
    return handle;
}

JNIEXPORT jint JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeIndexAdd(
        JNIEnv* env, jclass, jlong handle,
        jintArray ids, jobjectArray documents,
        jobjectArray metadatas, jobjectArray embeddings,
        jint embeddingDim) {
    if (handle == 0) return -1;

    jsize count = env->GetArrayLength(ids);
    jint* idData = env->GetIntArrayElements(ids, nullptr);

    std::vector<const char*> docPtrs(count);
    std::vector<const char*> metaPtrs(count);
    std::vector<const float*> embPtrs(count);
    std::vector<jstring> docStrings(count);
    std::vector<jstring> metaStrings(count);
    std::vector<jfloatArray> embArrays(count);

    for (jsize i = 0; i < count; i++) {
        docStrings[i] = static_cast<jstring>(env->GetObjectArrayElement(documents, i));
        docPtrs[i] = jstring_to_cstr(env, docStrings[i]);

        if (metadatas != nullptr) {
            metaStrings[i] = static_cast<jstring>(env->GetObjectArrayElement(metadatas, i));
            metaPtrs[i] = jstring_to_cstr(env, metaStrings[i]);
        } else {
            metaPtrs[i] = nullptr;
        }

        embArrays[i] = static_cast<jfloatArray>(env->GetObjectArrayElement(embeddings, i));
        embPtrs[i] = env->GetFloatArrayElements(embArrays[i], nullptr);
    }

    int result = cactus_index_add(
        reinterpret_cast<cactus_index_t>(handle),
        reinterpret_cast<const int*>(idData),
        docPtrs.data(),
        metadatas != nullptr ? metaPtrs.data() : nullptr,
        embPtrs.data(),
        static_cast<size_t>(count),
        static_cast<size_t>(embeddingDim)
    );

    for (jsize i = 0; i < count; i++) {
        release_jstring(env, docStrings[i], docPtrs[i]);
        if (metadatas != nullptr) {
            release_jstring(env, metaStrings[i], metaPtrs[i]);
        }
        env->ReleaseFloatArrayElements(embArrays[i], const_cast<jfloat*>(embPtrs[i]), JNI_ABORT);
    }

    env->ReleaseIntArrayElements(ids, idData, JNI_ABORT);
    return result;
}

JNIEXPORT jintArray JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeIndexQuery(
        JNIEnv* env, jclass, jlong handle,
        jfloatArray queryEmbedding, jint embeddingDim, jint topK) {
    if (handle == 0) return nullptr;

    jfloat* embData = env->GetFloatArrayElements(queryEmbedding, nullptr);

    std::vector<int> idBuffer(topK);
    std::vector<float> scoreBuffer(topK);
    size_t idBufferSize = static_cast<size_t>(topK);
    size_t scoreBufferSize = static_cast<size_t>(topK);

    const float* embPtr = embData;
    int* idPtr = idBuffer.data();
    float* scorePtr = scoreBuffer.data();

    int result = cactus_index_query(
        reinterpret_cast<cactus_index_t>(handle),
        &embPtr,
        1,
        static_cast<size_t>(embeddingDim),
        nullptr,
        &idPtr,
        &idBufferSize,
        &scorePtr,
        &scoreBufferSize
    );

    env->ReleaseFloatArrayElements(queryEmbedding, embData, JNI_ABORT);

    if (result < 0 || idBufferSize == 0) return nullptr;

    jintArray jarray = env->NewIntArray(static_cast<jsize>(idBufferSize));
    env->SetIntArrayRegion(jarray, 0, static_cast<jsize>(idBufferSize),
                          reinterpret_cast<const jint*>(idBuffer.data()));
    return jarray;
}

JNIEXPORT jint JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeIndexDelete(
        JNIEnv* env, jclass, jlong handle, jintArray ids) {
    if (handle == 0) return -1;

    jsize count = env->GetArrayLength(ids);
    jint* idData = env->GetIntArrayElements(ids, nullptr);

    int result = cactus_index_delete(
        reinterpret_cast<cactus_index_t>(handle),
        reinterpret_cast<const int*>(idData),
        static_cast<size_t>(count)
    );

    env->ReleaseIntArrayElements(ids, idData, JNI_ABORT);
    return result;
}

JNIEXPORT void JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeIndexDestroy(JNIEnv*, jclass, jlong handle) {
    if (handle != 0) {
        cactus_index_destroy(reinterpret_cast<cactus_index_t>(handle));
    }
}

JNIEXPORT jstring JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeComplete(
        JNIEnv* env, jclass, jlong handle,
        jstring messagesJson, jstring optionsJson, jstring toolsJson) {
    if (handle == 0) {
        return env->NewStringUTF("{\"error\":\"Model not initialized\"}");
    }

    const char* messages = jstring_to_cstr(env, messagesJson);
    const char* options  = jstring_to_cstr(env, optionsJson);
    const char* tools    = jstring_to_cstr(env, toolsJson);

    std::vector<char> buffer(DEFAULT_BUFFER_SIZE);

    int result = cactus_complete(
        reinterpret_cast<cactus_model_t>(handle),
        messages,
        buffer.data(),
        buffer.size(),
        options,
        tools,
        nullptr,  // no streaming callback for system service
        nullptr,  // user_data
        nullptr,  // no PCM audio input
        0
    );

    release_jstring(env, messagesJson, messages);
    release_jstring(env, optionsJson,  options);
    release_jstring(env, toolsJson,    tools);

    if (result < 0) {
        const char* error = cactus_get_last_error();
        std::string errorJson = "{\"error\":\"" + json_escape(error ? error : "Unknown error") + "\"}";
        return env->NewStringUTF(errorJson.c_str());
    }

    return env->NewStringUTF(buffer.data());
}

JNIEXPORT jstring JNICALL
Java_com_android_server_jarvis_inference_CactusWrapper_nativeGetLastError(JNIEnv* env, jclass) {
    const char* error = cactus_get_last_error();
    return env->NewStringUTF(error ? error : "");
}

} // extern "C"
