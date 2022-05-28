#include "Controller.h"

#include <iostream>		//Cout
#include <cmath>		//Functions: sqrt, cbrt, sin, cos, ceiling, floor, round, pow

#include <cstdlib>		//Random number generator
#include <ctime>		//Time seed for generator

using namespace std;

void MathLibraryExercise() {
	double num{};
	cout << "Enter a number (double)";
	cin >> num;

	cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
	cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

	cout << "The sine of " << num << " is: " << sin(num) << endl;
	cout << "The cosine of " << num << " is: " << cos(num) << endl;

	cout << "The ceiling of " << num << " is: " << ceil(num) << endl;
	cout << "The Floor of " << num << " is: " << floor(num) << endl;
	cout << "The round of " << num << " is: " << round(num) << endl;

	double power{};
	cout << "\nEnter a power to raise" << num << " to: ";
	cin >> power;
	cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
	cout << endl;
}
void RandomNumberGenerator() {
	int random_number{};
	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };

	cout << "RAND_MAX on my system is:" << RAND_MAX << endl;
	cout << "Modulus RAND_MAX is: " << RAND_MAX % (max + min) << endl;
	srand(time(nullptr));

	for (size_t i{ 1 }; i <= count; ++i) {
		random_number = rand() % max + min;
		cout << random_number << endl;
	}
	cout << endl;

};