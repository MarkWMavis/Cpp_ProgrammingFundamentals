#include "Array_Basics.hpp"
#include "Arrays_And_Vectors.hpp"
#include <iostream>

/*
* Arrays are COMPOUND data types or data structure that hold
*	elements of the same type. Each element can be accessed directly.
*
* It is a data type that must be made up of the same data type.
*	- Ex. a collection of test scores that are ints.
*
* Characteristics
*	- Fixed size
*	- Elements are all the same type
*	- Stored contiguously in memory
*	- Individual elements can be accessed by their position or index
*
*	- First element is at index 0
*	- Last element is at index size-1
*
* Always initialize arrays
* Very Efficient
* Iteration is often used to process
*/



int main() {

	int arr01[5];

	//Initializing Array with string literals
	arr01[0] = 12;	// <----string literal
	arr01[1] = 16;
	arr01[2] = 9;
	arr01[3] = 3;
	arr01[4] = 67;


	int arr03[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << sizeof(arr03) << " bytes" << std::endl;

	//No need to enter the size in direct initialization
	char str[] = "abc";

	//Direct Initialization
	int arr04[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printArray(arr04, 10);

	int size;
	std::cout << "How big of an array do you want?" << std::endl;
	std::cin >> size;
	int* A = new int[size];
	initialArray(*A, size);


	single_dimensional_array::declare_array();
	multi_dimensional_array::declare_array();
	single_dimensional_vector::declare_vector();
	multi_dimensional_vector::declare_vector();
	challenge::exercise();

	return 0;
}
