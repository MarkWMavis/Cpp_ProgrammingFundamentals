#include "Generic_Template.hpp"
#include "template_class.h"
#include "template_functions.hpp"
#include "template_class_specialization.h"
#include <iostream>

int main() {

	// --------------------------------------------------
	//	Generic Template Class
	Generic_Template<int> intTemp(10, 14);
	Generic_Template<float> floatTemp(3.4f, 5.6f);
	Generic_Template<char> charTemp(35, 35);
	
	std::cout << intTemp.add() << std::endl;
	std::cout << floatTemp.add() << std::endl;
	std::cout << (char)charTemp.add() << std::endl;
	// --------------------------------------------------
	//	Generic Template Class
	TemplateArray<int, 5> array1;
	TemplateArray<std::string, 50> array2;
	std::cout << "Array size is: " << array1.GetSize() << std::endl;
	std::cout << "Array size is: " << array2.GetSize() << std::endl;

	mysequence <int, 5> myints;         //Creating a Int array of size 5
	mysequence <double, 5> myfloats;    //Creating a Float array of size 5
	myints.setmember(0, 100);           //Assigning Element 0 to 100
	myfloats.setmember(3, 3.1416);      //Assigning Element 3 to 3.1416
	std::cout << myints.getmember(0) << '\n';    //Outputing value at index 0
	std::cout << myfloats.getmember(3) << '\n';  //Outputing value at index 3

	// --------------------------------------------------
	//	Generic Template Functions
	Print_Template(5);
	Print_Template<int>(10);
	Print_Template("Hello");
	Print_Template<std::string>("String");
	Print_Template(5.67f);
	Print_Template<float>(25.35f);

	const int a = 19;
	const int b = 25;
	auto maxVal = getMax(a, b);
	std::cout << "Max Value is: " << maxVal << std::endl;

	// --------------------------------------------------
	//	Template Classe Specialization
	Container<int> c1(10);
	std::cout << c1.increase() << std::endl;

	Container<char> c2('j');
	std::cout << "Char is: " << c2.uppercase() << std::endl;

	// --------------------------------------------------


	std::cin.get();

	return 0;
}