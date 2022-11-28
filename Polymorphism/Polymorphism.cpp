#include "Polymorphism.h"
#include <assert.h>
#include <iostream>

namespace Polymorphism {
	Mammal::Mammal(int a = 0, int b = 0) : width{ a }, height{ b } {}
	//With a virtual function, unique overloaded functions for each class respond
	// based on the class they are a part of

	void Mammal::listCharicteristics() { std::cout << "Just a vertibrate" << std::endl; }
	//With a pure virtual function, we don't need an implementation in the base class sound because it is useless to the base class
	//void Mammal::sound() { std::cout << "Mammal Noise" << std::endl; }

	Bear::Bear(int a = 0, int b = 0) : Mammal(a, b) {}
	void Bear::listCharicteristics() { std::cout << "A bear is a vertibrate that walks on four legs" << std::endl; }
	void Bear::sound() { std::cout << "Bear: RRWAARRRRRR!!" << std::endl; }

	Tiger::Tiger(int a = 0, int b = 0) : Mammal(a, b) {}
	void Tiger::listCharicteristics() { std::cout << "A Tiger is a vertibrate that walks on four legs and has a tail" << std::endl; }
	void Tiger::sound() { std::cout << "Tiger: Roooaarrrrrr!!" << std::endl; }

	Whale::Whale(int a = 0, int b = 0) : Mammal(a, b) {}
	void Whale::listCharicteristics() { std::cout << "A Whale is a vertibrate that swims" << std::endl; }
	void Whale::sound() { std::cout << "Whale: mmMMMWWAAYYYEeee" << std::endl; }

	void RunPolymorphism() {
		Mammal* mammal;

		Bear bear{ 10,7 };
		Tiger tiger{ 10,5 };
		Whale whale{ 300, 25 };

		mammal = &bear;
		mammal->listCharicteristics();
		mammal->sound();

		mammal = &tiger;
		mammal->listCharicteristics();
		mammal->sound();

		mammal = &whale;
		mammal->listCharicteristics();
		mammal->sound();
	}
}



