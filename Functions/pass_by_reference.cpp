#include "pass_by_reference.h"
#include <iostream>

/// <summary>
/// "CALL BY VALUE"
/// This function is an example of "Call by Value" which copies the value of the passed 
/// argument into a new variable that exists in that codeblocks scope. The size of the variable
/// or object being passed matters as its size increases
/// </summary>
/// <param name="a"></param>
void FuncByReference(short int* p) {
	++(*p);	//Dereferenced pointer to access the variable and then increment 
}

void stringByReference(const char* s) {
	for (s; *s; s++) {
		printf("%c\n", *s);
	}
}