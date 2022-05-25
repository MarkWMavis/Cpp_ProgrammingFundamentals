#include "GenericProgramming.h"

void genericprogramming_exercise01() {
	int a{ 10 };
	int b{ 20 };
	double c{ 14.56 };
	double d{ 53.23 };

	std::cout << max<int>(a, b) << std::endl;
	std::cout << min<int>(a, b) << std::endl;
	std::cout << max<double>(c, d) << std::endl;
	std::cout << min<double>(c, d) << std::endl;
}
