#include "PublicConstructor.h"
#include <iostream>

// Public Constructor (Struct) member functions implementations
void PublicConstructor::setpi1(const int value) {
	pi1 = value;
}
void PublicConstructor::setpi2(const int value) {
	pi2 = value;
}
void PublicConstructor::setpi3(const int value) {
	pi3 = value;
}
int PublicConstructor::getpi1() const {
	return pi1;
}
int PublicConstructor::getpi2() const {
	return pi2;
}
int PublicConstructor::getpi3() const {
	return pi3;
}


void PublicConstructorDemo() {
	PublicConstructor s1 = PublicConstructor(6, 7, 8);
	PublicConstructor s2(99, 88, 77);

	printf("The value of public S1 int 1: %d\n", s1.pi1);
	printf("The value of public S1 int 2: %d\n", s1.pi2);

	printf("The value of public S2 int 1: %d\n", s2.pi1);
	printf("The value of public S2 int 2: %d\n", s2.pi2);
}