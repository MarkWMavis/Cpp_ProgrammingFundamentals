#include "class_namespace.hpp"

void NameSpace::namepace_function() {

}

ClassNamespace::Person::Person(std::string s) {
	size = s.length();
	std::cout << s << " Object Created" << std::endl;
}

std::string ClassNamespace::Person::address() {
	return "Hello";
}

void ClassNamespace::Person::address(std::string value) {

}

void ClassNamespace::Person::dump() {

}