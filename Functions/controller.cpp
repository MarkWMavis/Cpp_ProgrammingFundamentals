#include "Controller.h"

#include <iostream>		//Cout
#include <cmath>		//Functions: sqrt, cbrt, sin, cos, ceiling, floor, round, pow

#include <cstdlib>		//Random number generator
#include <ctime>		//Time seed for generator


void Math::math_library_exercise() {
		double num{};
		std::cout << "Enter a number (double)";
		std::cin >> num;

		std::cout << "The sqrt of " << num << " is: " << sqrt(num) << std::endl;
		std::cout << "The cubed root of " << num << " is: " << cbrt(num) << std::endl;

		std::cout << "The sine of " << num << " is: " << sin(num) << std::endl;
		std::cout << "The cosine of " << num << " is: " << cos(num) << std::endl;

		std::cout << "The ceiling of " << num << " is: " << ceil(num) << std::endl;
		std::cout << "The Floor of " << num << " is: " << floor(num) << std::endl;
		std::cout << "The round of " << num << " is: " << round(num) << std::endl;

		double power{};
		std::cout << "\nEnter a power to raise" << num << " to: ";
		std::cin >> power;
		std::cout << num << " raised to the " << power << " power is: " << pow(num, power) << std::endl;
		std::cout << std::endl;
	}

void NumberGen::random_number_generator() {
	int random_number{};
	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };

	std::cout << "RAND_MAX on my system is:" << RAND_MAX << std::endl;
	std::cout << "Modulus RAND_MAX is: " << RAND_MAX % (max + min) << std::endl;
	srand(time(nullptr));

	for (size_t i{ 1 }; i <= count; ++i) {
		random_number = rand() % max + min;
		std::cout << random_number << std::endl;
	}
	std::cout << std::endl;

};