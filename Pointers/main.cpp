#include "Pointer_Basics.hpp"
#include "Pointers.h"

int main() {

	int* int_pointer = new int(5);
	ReadPointerInfo(int_pointer);
	delete int_pointer;		//Because this exists on the heap, delete it from the heap

	int int_num{ 19 };
	ReadPointerInfo(&int_num);

	//Retrieving area from Heap (10 ints)
	int* subArray = (int*)malloc(10 * sizeof(int));

	uint8_t* intarr_pointer = new uint8_t[5]{ 77, 65, 82, 75, 0 };
	uint8_t* intarr_startingAddress = intarr_pointer;

	ReadUint8Array(intarr_pointer);

	intarr_pointer = intarr_startingAddress;
	delete[] intarr_pointer;	//Deleting values in this block
	intarr_pointer = NULL;



	uint8_t* newArray = new uint8_t[5]{ 12, 65, 64, 54, 92 };
	uint8_t* newArrayMidPointer = &newArray[2];
	uint8_t* newArrayEnd = &newArray[4];

	delete[] newArray;
	newArray = NULL;

	std::cout << "newArray Start: " << &newArray << std::endl;
	std::cout << "newArrayMiddle: " << &newArrayMidPointer << std::endl;
	std::cout << "newArrayEnd: " << &newArrayEnd << std::endl;


	return 0;
}
