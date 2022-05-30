#include"Person.h"

Person::Person(std::string n, double w) : name{ n }, weight{ w } {}

Person Person::operator=(const Person& rhs) {
	Person temp(rhs.name, rhs.weight);
	return temp;
}

Person Person::operator+(const Person& rhs) {
	 Person temp(name + " & " + rhs.name, weight + rhs.weight);
	 return temp;
}

void Person::Person::display_name() {
	for (auto it = name.begin(); it != name.end(); it++) {
		std::cout << *it;
	}
	std::cout << " Weight: " << weight << std::endl;
}