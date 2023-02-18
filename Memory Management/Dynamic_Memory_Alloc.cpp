#include "Dynamic_Memory_Alloc.h"

void DynamicMemoryAllocation1(int value) {
	int* var1 = new int(value);
	printf("%d\n", *var1);

	int* var2 = new int;
	*var2 = 97;
	printf("%d\n", *var2);
	delete(var1);	//Free the memory
	var1 = NULL;
	delete(var2);
	var2 = NULL;
}

void DynamicMemoryAllocation2(int arrSize) {
	int* ap = new int[arrSize];

	for (int i = 0; i < arrSize; i++) {
		ap[i] = i;
	}

	//Uniform Initialization
	int* uip = new int[5] { 7, 3, 9, 13, 4 };
	char* cp = new char[4] {'a', 'b', 'c', 'd'};

	delete[]ap;
	delete[]uip;
	delete[]cp;
	ap = NULL;
	uip = NULL;
	cp = NULL;

}


Box::Box() { std::cout << "Constructor called!" << std::endl; }
Box::~Box() { std::cout << "Destructor called!" << std::endl; }

void DynamicMemoryAllocation3() {
	int* ip = new int;

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