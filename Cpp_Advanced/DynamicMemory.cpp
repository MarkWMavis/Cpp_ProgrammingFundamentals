#include "DynamicMemory.h"
#include <iostream>
#include <string>

Box::Box() {
	std::cout << "Constructor called!" << std::endl;
}
Box::~Box() {
	std::cout << "Destructor called!" << std::endl;
}

void RunDynamicMemory() {
	int * ip = new int;
	
	//Checking for pointer and value implementation
	if (!(ip = new int)) {
		std::cout << "Error: out of memory." << std::endl;
		exit(1);
	}
	*ip = 10;
	delete ip;
	ip = NULL;

	char* cp = new char[20];
	delete[] cp;
	cp = NULL;


	Box* bp = new Box[5];
	delete[] bp;
}