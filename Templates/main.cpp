#include "Generic_Class_Template.hpp"
#include "Generic_Function_Template.hpp"
#include "Template_Class_Specification.hpp"
#include <iostream>

int main() {

	GenericClassRun();

	GenericFunctionTemplateRun();

	TemplateClassSpecialization();
	
	std::cin.get();

	return 0;
}