//Local Library
#include "controller.h"

//External library
#include <iostream>
#include <cmath>

//Global Const variable that can not be changed ever!
const int months_per_year = 12;

void constant_variables::basics() {
	std::cout << "Like C++ variables: \n";
	std::cout << " * Have Names\n";
	std::cout << " * Occupy Storage\n";
	std::cout << " * Are Usually Typed\n" << std::endl;
	std::cout << "Can NOT be changed once declared!" << std::endl;
}
void constant_variables::types_of_constants() {
	std::cout << "Types of constants: \n";
	std::cout << "Literal constants \n";
	std::cout << "Declared constants \n" << "	* Const keyword \n";
	std::cout << "Constant expressions \n" << "	* constexpr keyword \n";
	std::cout << "Enumerated constants \n" << "	* enum keyword \n";
	std::cout << "Defined constants \n" << "	* #define \n";

	//Local Integer Literal Constants:
	const int days_in_year{ 365 };
	const int int1{ 12 };	// - Integer
	const int int2{ 12U };	// - Unsigned Integer
	const int int3{ 12L };	// - Long integer
	const int int4{ 12LL };	// - Long Long Integer

	//Local Floating-point Literal Constants:
	const double double1{ 12.1 };	// - double
	const double double2{ 12.1F };	// - float
	const double double3{ 12.1L };	// - long double

	/*Local Character Literal Constants
	*	\n	- newline
	*	\r	- return
	*	\t	- tab
	*	\b	- backspace
	*	\'	- single quote
	*	\"	- double quote
	*	\\	- backslash
	*/
}
void constant_variables::challenge01() {
	/*Franks Carpet Cleaning Service
	* Charges $30 per room
	* Sales tax rate is 6%
	* Estimates are valid for 30 days
		
		prompt the user for the number of rooms they would like cleaned
		and provide an estimate such as:

	Estimate for carpet cleaning service:
	Number of rooms: 2
	Cost: $60
	Tax: $3.6
	====================================
	Total estimate: $63.6
	This estimate is valid for 30 days.
	*/
	int r{ 0 };
	
	std::cout << "Enter number of Nights: ";
	std::cin >> r;

	const int rooms{ r };
	const int cost{ 699 };
	const int cleaning_fee{ 249 };
	const double sales_tax{ .17962 };

	std::cout << "Estimate for carpet cleaning service:" << std::endl;
	std::cout << "Number of rooms: " << rooms << std::endl;
	std::cout << "Price per room: " << cost << std::endl;
	std::cout << "Cost: $" << rooms*cost << std::endl;
	std::cout << "Cleaning Fee: $" << cleaning_fee << std::endl;
	std::cout << "Tax: $" << std::ceil(((rooms * cost)*sales_tax) * 100.0) / 100.0 << std::endl;
	std::cout << "====================================================" << std::endl;
	std::cout << "Total estimate: " << std::ceil(((rooms * cost) + ((rooms * cost)*sales_tax)) * 100.0) / 100.0 + cleaning_fee << std::endl;
	std::cout << "This estimate is valid for 30 days" << std::endl;





}