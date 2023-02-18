#include "Pointer_Basics.hpp"
#include <iostream>

void PointerBasics() {
	int a = 4;
	int* ip = &a;

	std::cout << "ptr address: " << &ip << std::endl;
	std::cout << "Var address: " << ip << std::endl;
}

void PointerArithmetic() {
	int a = 10;
	int* p = &a;
	printf("%p\n", p);		//Address Locations
	printf("%p\n", p + 1);	//Address Location + 4 bytes

	/*
		because the pointer is an integer pointer, and integers are 4 bytes (8bytes in some systems)
		when 1 is added to the pointer, it increments the address by 4 bytes
	*/

	char* cp = new char{ 'a' };
	printf("%p\n", cp);
	printf("%p\n", cp + 1);

	/*
		because the pointer is an char pointer, and char characters are 1 byte when 1 is added to
		the pointer, it increments the address by 1 bytes
	*/
}

void PointerToPointer() {
	int x = 5;

	int* p = &x;
	printf("Address of x: %p Value of x: %d\n", p, *p);

	*p = 6;
	printf("Address of x: %p Value of x: %d\n", p, *p);

	int** q = &p;	//int pointer to an int pointer
	printf("Address of q: %p Value of q: %d\n", q, *(*q));

	int*** s = &q;	//int pointer to an int pointer to an int pointer
	printf("Address of s: %p Value of s: %d\n", s, *(*(*s)));

	int** arraypointers = new int* [10];
	delete[] arraypointers;
}

//--------------------------------------------------------//
void CallByReferenceHelper(int* a) {
	(*a)++;
}
void PointerAsFunctionArguments() {
	int a = 10;
	CallByReferenceHelper(&a);
	printf("%d\n", a);
}	//----------------------------------------------------//

void PointersAndArrays() {
	int a[5]{ 10, 20, 30, 40, 50 };
	int* p = a;
	for (int i = 0; i < 5; i++) {
		printf("Address: %p Value %d: %d\n", p, i, *p);
		p++;
	}
}


void IncrementBoxDimensions(Box& b, int width, int height) {
	b.addToWidth(width);
	b.addToHeight(height);
}

Box::Box(int w = 0, int h = 0) :m_width{ w }, m_height{ h } {};
void Box::addToWidth(int w) { m_width += w; }
void Box::addToHeight(int h) { m_height += h; }
void Box::PrintDimensions() { printf("Height: %d Width: %d\n", m_height, m_width); }

int ArrayAsArgumentHelper(int* arr, int size) {
	int sum = 0;

	//For loop that ends based on size counter
	/*for (int i = 0; i < size; i++) {
		sum += arr[i];
	}*/

	//For loop that automatically ends at the value -1
	for (int* i = arr; *i; i++) {
		sum += *i;
	}
	return sum;
}
void ArraysAsFunctionArguments() {
	//int A[11]{ 54, 72, 23, 114, 49, 68, 32, 43, 21, 94};
	int A[11]{ 54, 72, 23, 114, 49, 68, 32, 43, 21, 94, '\0' };

	int size = sizeof(A) / sizeof(int);
	printf("Sum of Array: %d\n", ArrayAsArgumentHelper(A, size));

	Box b1(24, 19);
	b1.PrintDimensions();
	IncrementBoxDimensions(b1, 5, 18);
	b1.PrintDimensions();
}


void PrintCharArray(char* c) {
	int i = 0;
	while (c[i]) {
		std::cout << c[i];
		i++;
	}
}
void CharacterArraysAndPointers() {
	char c1[6]{ "hello" };
	char* c2;
	c2 = c1;
	printf("%c\n", c2[1]);
	c2[3] = 't';
	printf("%c\n", c2[3]);
	PrintCharArray(c1);
}

void CharacterArraysAndPointersPart2() {
	const char* cp = "string literal";		//Creating pointers to string literals makes the string constant
}

void Print3DArray(int(*ThreD)[3][4]) {
	for (int i = 0; i < 2; i++) {
		std::cout << "\n";
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%p : %d Coordinate: (%d,%d,%d) ", &ThreD[i][j][k], ThreD[i][j][k], i, j, k);

				//B[i][j][k]	= *(B[i][j]+k) 
				//				= *(*(B[i]+j)+k)
				//				= *(*(*(B + i)+j)+k)

				//	*(c[1]+1) = c[1][1] = &c[1][1][0]

				//printf("%p : %d Coordinate: (%d,%d,%d) ", &ThreD[i][j][k], (*(*(ThreD[i])+j)+k), i, j, k);
				//printf("%p : %d Coordinate: (%d,%d,%d) ", &ThreD[i][j][k],*(*(ThreD[i]+j)+k), i, j, k);

			}
			std::cout << "\n";
		}
	}
}

void PointersAndMultidimensionalArrays() {

	// A good way to think of the 3D array on the next line is to say
	// it is 2 collections of the 3 collections or 4 elements
	int multiarray[2][3][4]{ {{ 0, 1, 2, 3},{ 4, 5, 6, 7 },{ 8, 9,10,11}},
							 {{12,13,14,15},{16,17,18,19,},{20,21,22,23}} };
	/*In the case of a 3D array, i is the outside pair ofcurly braces, J is the pair
	* of braces inside that, and K is the pair inside of that.
	*/

	//4x3x2 Array
	//int multiarray2[4][3][2]{ {{1, 2},{3, 4},{5, 6}},{{7, 8},{9,10},{11,12}}, {{13,14},{15,16},{17,18}}, {{19,20},{21,22},{23,24}} };

	int(*ThreD)[3][4] = multiarray;	//Pointer to a 3 dimensional array with 4 elements
	//int(*ThreD)[3][2] = multiarray2;

	Print3DArray(multiarray);

}

void PointersAndDynamicMemory() {

	/* In C -> Functions
	*	malloc()
	*	calloc()
	*	relloc()
	*	free
	*/

	/* In C++ -> operators
	*	new
	*	delete
	*/

	//Memory Allocation in C
	//Malloc Does not initialize the values. 
	//int* dynAlloc = (int*)malloc(10*sizeof(int));
	//free(dynAlloc);

	//Memory Allocation in C
	//Calloc Initializes all bit position values to 0
	//int* callocAlloc = (int*)calloc(3, sizeof(int));
	//free(callocAlloc);

	//Memory Allocation in C
	//Realloc resizes an existing memory block
	//1st Argument is current allocation, 2nd argument is new size
	//int* reallocAlloc = (int*)realloc(callocAlloc, 5);
	//free(reallocAlloc);

	//Same as Malloc
	//int* reallocAllocNull = (int*)realloc(NULL, 5);
	//free(reallocAlloc);


	int a;	//Goes on stack
	int* p = new int;	//Goes on Heap
	*p = 100;
	delete p;

	int* ap = new int[5] { 1, 2, 3, 4, 5 };
	delete[]ap;
}

int* PointerFunctionAddHelper(int* a, int* b) {
	int* c = (int*)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}
void PointersAsFunctionReturns() {
	int a = 4, b = 8;
	int* sum = PointerFunctionAddHelper(&a, &b);
	delete sum;
}

int FunctionPointersAddHelper(int a, int b) {
	return a + b;
}
void FunctionPointers() {
	/* Pointers can point to DATA and FUNCTIONS
	*/
	// return type (*pointername)(function argument types);
	int (*funcPointer)(int, int) = FunctionPointersAddHelper;

	int c;
	c = (*funcPointer)(2, 3);
}