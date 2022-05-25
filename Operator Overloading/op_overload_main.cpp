#include "string.h"

int main() {

	Mystring empty;				//No-argument constructor
	Mystring Larry("Larry");	//Overloaded constructor
	Mystring stringcopy(Larry);	//Copy constructor

	empty.display();
	Larry.display();
	stringcopy.display();

	empty = Larry;
	
	empty.display();
	return 0;
}