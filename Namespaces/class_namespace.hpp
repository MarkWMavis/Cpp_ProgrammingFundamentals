#pragma once
#include <string>
#include <iostream>


namespace NameSpace {
	void namepace_function();
}

namespace ClassNamespace {

	class Person {
	public:
		Person(std::string);
		std::string address();
		void address(std::string);
		void dump();
	private:
		int size;
	};
}