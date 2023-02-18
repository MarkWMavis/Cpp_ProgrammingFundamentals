#include "recursive_functions.h"

int nonRecursiveFunction(const int val) {
	int factorial = 1;
	for (int i = val; i > 1; i--) {
		factorial *= i;
	}
	return factorial;
}