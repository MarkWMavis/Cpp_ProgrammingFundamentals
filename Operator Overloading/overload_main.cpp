#include "string.h"
#include <iostream>

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



	Mystring Paul{ "PAUL" };
	Mystring paul;

	Paul.display();
	paul = -Paul;
	Paul.display();


	Mystring Equal("Equal");
	Mystring equal("Equal");
	Mystring NotEqual("NotEqual");

	std::cout << (Equal == equal) << std::endl;
	std::cout << (Equal == NotEqual) << std::endl;

	Mystring Concat = Equal + "NotEqual";
	Concat.display();



	return 0;
}