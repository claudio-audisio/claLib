#pragma once

#include <cmath>

namespace cl {
	static bool isWholeNumber(const double x) {
		return fabs(x - round(x)) < (x / 1e6);
	}
}