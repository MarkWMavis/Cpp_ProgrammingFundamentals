#pragma once
#include <vector>
#include <string>

namespace NameSpace {

	void namepace_function();

}

namespace ClassNamespace {

	class Person {
	public:
		std::string address();
		void address(std::string);
		void dump();
	private:
		std::vector<int> size;
	};
}