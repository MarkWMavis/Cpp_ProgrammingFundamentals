#include "variable_num_arguments.hpp"
#include <cstdio>
#include <cstdarg>

double average(const int count, ...) {
	va_list ap;
	int i;
	double total = 0.0;

	va_start(ap, count);
	for (i = 0; i < count; ++i) {
		total += va_arg(ap, double);
	}
	va_end(ap);
	return total / count;
}