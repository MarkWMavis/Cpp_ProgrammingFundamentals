#include "Exception_Handling.hpp"
#include <iostream>
#include <exception>

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
		double result = division(x, y);
		std::cout << z << std::endl;
	}
	catch (const char* msg) {
		std::cerr << msg << std::endl;
	}

	try {
		throw MyException();
	}
	catch (MyException& e) {
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
}