#include "Generic_Function_Template.hpp"
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

template<typename T>
void Print_Template(const T argument) {
	cout << argument << endl;
};

template<typename T>
T getMax(T& a, T& b) {
	return a > b ? a : b;
};




void GenericFunctionTemplateRun() {
	// --------------------------------------------------
	//	Generic Function Templates
	Print_Template(5);
	Print_Template<int>(10);
	Print_Template("Hello");
	Print_Template<string>("String");
	Print_Template(5.67f);
	Print_Template<float>(25.35f);

	const int a = 19;
	const int b = 25;
	auto maxVal = getMax(a, b);
	cout << "Max Value is: " << maxVal << endl;
}