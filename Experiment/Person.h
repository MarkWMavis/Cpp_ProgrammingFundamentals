#pragma once
#include <string>
#include <iostream>
class Person {
public:
	Person(std::string, double);
	void display_name();

	Person operator+(const Person&);
	Person operator=(const Person&);
	Person operator+=(const Person&);

private:
	std::string name{};
	double weight{};

	
};