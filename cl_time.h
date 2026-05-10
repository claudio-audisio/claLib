#pragma once

#include <chrono>

#include "cl_types.h"

namespace cl {
	inline unsLL getElapsedNanos(const std::chrono::time_point<std::chrono::steady_clock> start) {
		return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - start).count();
	}

	inline unsLL getElapsedMicros(const std::chrono::time_point<std::chrono::steady_clock> start) {
		return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count();
	}

	inline unsLL getElapsedMillis(const std::chrono::time_point<std::chrono::steady_clock> start) {
		return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count();
	}

	inline unsLL getElapsedSeconds(const std::chrono::time_point<std::chrono::steady_clock> start) {
		return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - start).count();
	}
}
