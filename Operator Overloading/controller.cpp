#include "controller.h"
#include "string.h"
#include <iostream>

void OverloadingAssignmentOperator() {
	Mystring a{ "Hello" };		//Using overloaded constructor
	Mystring b;					//Using default constructor
	b = a;						//Using Copy Constructor
	
	b = "This is a test";
	
	a.display();
	b.display();
}

void OverloadingMoveOperator() {
	Mystring stooges;
	stooges = "Larry, Moe, and Curly";	//This works because of the 
	stooges.display();
	
	Mystring a{ "Hello" };		//Overloaded constructor
	a = Mystring{ "Halo" };		//Overloaded constructor then move assignment
	a = "Bonjour";				//Overloaded constructor then move assignment
}

void OverloadingOperationsAsMemberFunctions() {

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


}