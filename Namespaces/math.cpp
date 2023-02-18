#include "namespaces_nested.hpp"
#include <iostream>

float namespaces::mathclass01::calculate(const float, const float) {
	std::cout << "Class: Math 01" << std::endl;
	std::cout << "Method: Calculate" << std::endl;
	return 1;
}

float namespaces::mathclass02::calculate(const float, const float) {
	std::cout << "Class: Math 02" << std::endl;
	std::cout << "Method: Calculate" << std::endl;
	return 1;
}