#include "Constants_Literals.h"
#include "DateAndTime.h"
#include <iostream>

void function(void);
static int count = 10; /* Global Variable */

int main() {
	//DefiningConstants();
	//RunDateAndTime();
	Function();
	return 0;
}




void function(void) {
	static int i = 5;
	i++;
	std::cout << "i is: " << i;
	std::cout << " and count is: " << count << std::endl;
}