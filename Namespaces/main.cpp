#include "namespaces_nested.hpp"
#include "class_namespace.hpp"
#include <iostream>



//	ANONYMOUS NAMESPACE----------------------------------------
namespace {
	void internalFunction() {
		//This function is only available to this cpp file and 
		//in this scope

		std::cout << "Calling internalFunction from Anonymous Namespace" << std::endl;

	};
}





int main() {

	function_pointers::Print(10, 'w');
	internalFunction();
	
	NameSpace::namepace_function();
	ClassNamespace::Person p1("Mark Mavis");


	return 0;
}