#include "Abstraction.h"
#include <iostream>

Adder::Adder(int a = 0) :m_total{ a } {}
void Adder::addNumber(int number) { m_total += number; }
int Adder::getTotal() { return m_total; }

void RunAbstraction() {
	Adder adder{ 0 };

	adder.addNumber(10);
	adder.addNumber(20);
	adder.addNumber(30);
	
	std::cout << "Total: " << adder.getTotal() << std::endl;

}