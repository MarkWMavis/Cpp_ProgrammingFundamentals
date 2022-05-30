#pragma once
#include <vector>
#include <string>

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