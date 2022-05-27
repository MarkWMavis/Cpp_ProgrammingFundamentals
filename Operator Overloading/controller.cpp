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
	//Mystring s1;
	//s1 = Mystring{ "Frank" };
	
	Mystring a{ "Hello" };		//Overloaded constructor

	//For R-values --> we want to use Move Constructors over Copy Constructors because
	//	they are much more efficient.
	a = Mystring{ "Halo" };		//Overloaded constructor then move assignment
	a = "Bonjour";				//Overloaded constructor then move assignment
}

void OverloadingOperationsAsMemberFunctions() {
	
	// Testing Unary Overloaded Operator (take no arguments)
	Mystring Paul{ "PAUL" };
	Mystring paul;
	Paul.display();
	paul = -Paul;
	Paul.display();


	// Testing Overloaded binary Operators (take one argument)
	Mystring Equal("Equal");
	Mystring equal("Equal");
	Mystring NotEqual("NotEqual");

	std::cout << (Equal == equal) << std::endl;
	std::cout << (Equal == NotEqual) << std::endl;


}