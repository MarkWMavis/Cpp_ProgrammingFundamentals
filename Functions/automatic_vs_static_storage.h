#pragma once
#include <iostream>

/*====================================================================
* Automatic Storage vs Static Storage
*/


void automaticStoreageFunction() {
	int x = 5;				//This variable is create as a auto storage and only is carried
	// until the execution of this code block is finished
	printf("X: %d\n", x);
	++x;
}

void staticStorageFunction() {
	static short int x = 5;	//This variable is created as static storage and 
	//carried forward and can be accessed for the length of the program
	printf("X: %d\n", ++x);
}
std::string staticStringStorage() {
	const std::string s = "Here is a string that is in the main memory pool";
	return s;
}
