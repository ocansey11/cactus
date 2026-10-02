// JarvisOS replacement for cactus-engine/src/telemetry_impl.cpp.
//
// The upstream implementation posts usage events to a remote endpoint via
// libcurl. JarvisOS runs the engine inside system_server and must never open a
// network connection from it, so the Soong build compiles this file instead:
// same interface (telemetry.h), no storage, no network.

#include "telemetry.h"

#include <atomic>

namespace cactus {
namespace telemetry {

static std::atomic<bool> g_stream_mode{false};

void init(const char*, const char*, const char*) {}
void setEnabled(bool) {}
void setCloudDisabled(bool) {}
void setAppId(const char*) {}
void setTelemetryEnvironment(const char*, const char*, const char*) {}
void setCloudKey(const char*) {}
void cacheCloudApiKey(const char*) {}
std::string loadCachedCloudApiKey() { return std::string(); }
void recordInit(const char*, bool, double, const char*) {}
void recordCompletion(const char*, const CompletionMetrics&) {}
void recordCompletion(const char*, bool, double, double, double, int, const char*) {}
void recordEmbedding(const char*, bool, const char*) {}
void recordTranscription(const char*, bool, double, double, double, int, double, const char*) {}
void recordStreamTranscription(const char*, bool, double, double, double, int, double, double,
                               double, int, const char*) {}
void setStreamMode(bool in_stream) { g_stream_mode.store(in_stream); }
bool isStreamMode() { return g_stream_mode.load(); }
void markInference(bool) {}
void flush() {}
void shutdown() {}

} // namespace telemetry
} // namespace cactus
