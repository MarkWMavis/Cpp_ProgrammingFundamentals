#include "namespaces_nested.hpp"
#include <iostream>


void function_pointers::Print(int count, char ch) {
	for (int i = 0; i < count; i++) {
		std::cout << ch;
	}
	std::cout << std::endl;
}


void EndMessage() {
	std::cout << "End of Program" << std::endl;
}


void function_pointers::Run() {

	//The function pointer needs to match the signature of the function
	void(*fnptr) (int, char) = &function_pointers::Print;
	(*fnptr)(10, '*');
	fnptr(25, '#');

	//The at exit function registers the function pointer to the EndMessage function
	// and then the function pointer is invoked after main so it doesn't matter
	// where we put the function
	atexit(EndMessage);

}