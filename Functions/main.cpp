#include "passing_argument.h"
#include "passing_arrays.h"
#include "pass_by_value.h"
#include "pass_by_reference.h"
#include "helper_classes.h"
#include "helper_functions.h"
#include "automatic_vs_static_storage.h"
#include "function_pointers.h"
#include "function_overloading.hpp"
#include "variable_num_arguments.hpp"
#include "recursive_functions.h"
#include "Math.h"
#include <iostream>


int main() {

	int x = 10, y = 5;
	add(x, y);

	int a = 16, b = 24;
	addPointer(&a, &b);
	addReference(a, b);
	swapValue(a, b);

	int* newArray = returnArray(10);
	delete[]newArray;
	newArray = 0;

	int arr[6]{ 12, 41, 32, 11, 34, 0};
	sizeofArray(arr);
	
	// Pass By Value------------------------------------
	short int sx = 7;
	FuncByValue(sx);
	printf("The Call by Value variable x is: %d\n", sx);

	// Passing By Reference-----------------------------
	FuncByReference(&sx);
	FuncByReference(&sx);
	FuncByReference(&sx);
	printf("The Call by Reference variable x is: %d\n", sx);

	const char* name = "Mark Mavis";
	stringByReference(name);

	Cube c1 = { 3, 5, 10 };
	Sphere s1 = { 1, 5 };

	printf("The volume of a cube that is 3 x 5 x 10 is: %d\n", volumeOfCube(c1));
	printf("The volume of a Cylinder that is 5ft tall x 1ft radius is: %f\n", volumeOfSphere(s1));


	//	Automatic vs Static Storage-----------------------------------------
	automaticStoreageFunction();
	automaticStoreageFunction();
	automaticStoreageFunction();
	staticStorageFunction();
	staticStorageFunction();
	staticStorageFunction();

	const Cube newCube = createCube(14, 16, 20);
	const std::string returnedString = staticStringStorage();
	printf("%s\n", returnedString.c_str());

	// Pointers to Functions----------------------------------------------
	void (*pfunction)() = function;
	(*pfunction)();

	int (*pfunctionReturn)() = functionReturn;
	printf("The functionReturn value is: %d", (*pfunctionReturn)());

	while (jump(prompt()));
	puts("\nDone.");


	// Function Overloading-----------------------------------------------
	printf("The volume of a cube is: %f\n", volume(4.0f, 4.0f, 4.0f));
	printf("The volume of a Cylinder is: %f\n", volume(5.0f, 2.0f));
	printf("The volume of a Sphere is: %f\n", volume(5.0f));


	// Variable Number of Arguments---------------------------------------
	double avr = average(5, 4.0f, 5.0f, 6.0f, 3.0f, 6.0f);
	printf("The average is: %f", avr);


	// Recursive Functions------------------------------------------------
	printf("The factorial of 10 is: %d\n", nonRecursiveFunction(10));

	
	// Math Class Demonstration-------------------------------------------
	Math::math_library_exercise();
	NumberGen::random_number_generator();


	return 0;
}