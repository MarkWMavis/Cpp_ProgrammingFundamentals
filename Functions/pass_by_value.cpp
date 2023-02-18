#include "pass_by_value.h"
#include <iostream>

/// <summary>
/// "CALL BY VALUE"
/// This function is an example of "Call by Value" which copies the value of the passed 
/// argument into a new variable that exists in that codeblocks scope. The size of the variable
/// or object being passed matters as its size increases
/// </summary>
/// <param name="a"></param>
void FuncByValue(int a) {
	a++; //This is a copy of the argument a 
	printf("func x local value: %d\n", a);
}