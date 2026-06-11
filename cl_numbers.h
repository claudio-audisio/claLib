#pragma once

#include <cmath>

namespace cl {
	static bool isWholeNumber(const double x) {
		return fabs(x - round(x)) < (x / 1e6);
	}

	static bool isEqual(const float value, const float target, const float epsilon) {
		return fabs(value - target) < epsilon;
	}

	static bool isBetween(const int value, const int lb, const int ub) {
		return value >= lb && value <= ub;
	}

	static bool isBetween(const float value, const float lb, const float ub) {
		return value >= lb && value <= ub;
	}

}