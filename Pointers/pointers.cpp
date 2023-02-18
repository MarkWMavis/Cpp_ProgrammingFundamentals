#include "Pointers.h"
#include <iostream>

/*
	There are 3 sections in main memory
		3. Heap
		2. Stack
		1. Code Section

	The Program can directly access the code section and the Stack section
	The Program CAN NOT directly the access the Heap section. We need the pointer
		to access the heap memory

	Pointers are used to access the resources outside the code section and the
	stack section. This include Heap, external storage areas, Peripherials, 
	LAN etc.

	Pointers are also used for parameter passing


	//data variable
	int a = 10;

	pointer to the address of the variable
	int* a = &a
*/
void ReadPointerInfo(int* int_pointer) {
	std::cout << "Stack Memory Address of pointer: " << &int_pointer << std::endl;
	std::cout << "Heap Memory Address of Value: " << int_pointer << std::endl;
	std::cout << "Value Held at This Address: " << *int_pointer << std::endl;
};

void ReadUint8Array(uint8_t* arr) {
	uint8_t* address = arr;
	for (uint8_t* i = arr; *i != NULL; i++) {
		std::cout << *i;
	}
	std::cout << std::endl;
	arr = address;

	int count = 0;
	for (uint8_t* i = arr; *i != NULL; i++) {
		std::cout << i[count];	//Points can be accessed with bracket notation
	}
	std::cout << std::endl;
};