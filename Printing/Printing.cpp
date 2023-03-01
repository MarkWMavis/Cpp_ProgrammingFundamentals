#include <format>
using std::format;

#include <iostream>
using std::cout;

#include <string>
using std::string;

#include "Printing.hpp"
using std::FormatPrint;



void std::FormatPrint() {
	string name = "Mark Mavis";
	int age = 39;

	cout << format("Hello! My name is {} and I am {} years old\n", name, age);
	
	cout << format("Hello! I am {1} years and my name is {0}\n", name, age);

}