#include "ExceptionHandling.h"
#include <iostream>
#include <exception>
/*
* Exceptions provide a way to transfer control from one part of a program to another. C++ exception
* handling is built upon three keywords: try, catch, and throw.
* 
*	Throw - A program throws an exception when a problem shows up. This is done using a 
*			"throw" keyword. 
*	Catch - A program catches an exception with an exception handler at the place in a program
*			where you want to handle the problem. The catch keyword indicates the catching of
*			an exception.
*	Try - A try block identifies a block of code for which particular exceptions will be activated.
*			It's followed by one of more catch blocks.
*/

//THROWING EXCEPTIONS
double division(int a, int b) {
	if (b == 0) {
		throw "Division by zero condition!";
	}
	return (a / b);
}

//DEFINING NEW EXCEPTIONS
struct MyException : public _exception {
	const char* what() const throw () {
		return "C++ Exception";
	}
};

void RunExceptionHandling() {
	int x = 50;
	int y = 0;
	double z = 0;

	//CATCHING EXCEPTIONS
	try {
		double result = division(x,y);
		std::cout << z << std::endl;
	}
	catch (const char* msg) {
		std::cerr << msg << std::endl;
	}

	try {
		throw MyException();
	} catch (MyException& e) {
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e) {

	}
}