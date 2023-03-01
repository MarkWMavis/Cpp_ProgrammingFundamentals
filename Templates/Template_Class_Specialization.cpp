#include "Template_Class_Specification.hpp"

#include <format>
using std::format;

#include <iostream>
using std::cout;


// Generic Class Template
template<typename T>
Container<T>::Container(T arg) {
	element = arg;
};
template<typename T>
T Container<T>::Increase() {
	return ++element;
};

// Specialization Template
Container<char>::Container(char arg) {
	element = arg;
}
char Container<char>::uppercase() {
	//If element has a lowercase ASCII code
	if ((element >= 'a') && (element <= 'z')) {

		//Subtract lowercase ASCII from Uppercase ASCII and add it to the 
		// element ASCII.
		element += 'A' - 'a';

		//return element
		return element;
	}
	return element;
}

template<typename T1, typename T2>
Set<typename T1, typename T2>::Set(int n) {
	for (int i = 0; i < n; i++) {
		cout << format("Initializing: Vector of Type1 - Idx: {}\n", i);
	}
	for (int i = 0; i < n; i++) {
		cout << format("Initializing: Vector of Type2 - Idx: {}\n", i);
	}
}

void TemplateClassSpecialization() {
	// --------------------------------------------------
	//	Template Classe Specialization
	Container<int> c1(10);
	std::cout << c1.Increase() << std::endl;

	Container<char> c2('j');
	std::cout << "Char is: " << c2.uppercase() << std::endl;

	// --------------------------------------------------
}