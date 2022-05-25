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
	

	Mystring stooges;
	stooges = "Larry, Moe, and Curly";	//This works because of the 
	stooges.display();

	Mystring a{"Hello"};		//Overloaded constructor
	a = Mystring{ "Halo" };		//Overloaded constructor then move assignment
	a = "Bonjour";				//Overloaded constructor then move assignment

	
	return 0;
}