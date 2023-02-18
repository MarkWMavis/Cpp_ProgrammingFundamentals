#include "Constructor.h"
#include "PublicConstructor.h"

// Constructor Class Member Function Implementations
void Constructor::setpi1(int value) { pi1 = value; };
void Constructor::setpi2(int value) { pi2 = value; };
void Constructor::setpi3(int value) { pi3 = value; };
int Constructor::getpi1() const { return pi1; };
int Constructor::getpi2() const { return pi2; };
int Constructor::getpi3() { return pi3; };

// Constructor Class Operator Overload
Constructor& Constructor::operator= (const Constructor& constructor) {
	Constructor temp = constructor;
	return temp;
}

Constructor::~Constructor() {

}


void ConstructorDemo() {
	// Constructor Demonstration
	Constructor c;									//Implicit Constructor
	Constructor c2(35, 92, 75);						//Implicit Constructor Call (Done by the system)
	Constructor c3 = Constructor(108, 402, 572);	//Explicit Constructor Call (Manual Constructor Creation)

	const Constructor c4 = c3;
	printf("The value of pi1: %d", c4.getpi1());
	printf("The value of pi2: %d", c4.getpi2());
	//printf("The value of pi2: %d", c4.getpi3());	//This non-const member function can not be 
	//called on a const object

	PublicConstructor s1 = PublicConstructor(6, 7, 8);
	PublicConstructor s2(99, 88, 77);

	printf("The value of public int 1: %d\n", c.pi1);
	printf("The value of public int 2: %d\n", c.pi2);

	printf("The value of public int 1: %d\n", c2.pi1);
	printf("The value of public int 2: %d\n", c2.pi2);
}