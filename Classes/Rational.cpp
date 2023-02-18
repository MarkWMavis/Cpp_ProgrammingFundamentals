#include "Rational.h"
#include<cstdio>

Rational::Rational() : numberator(0), denominator(0) {};
Rational::Rational(int n = 0, int d = 1) : numberator(n), denominator(d) { puts("Default Constructor Used"); };
Rational::Rational(const Rational& rhs) : numberator(rhs.numberator), denominator(rhs.denominator) { puts("Copy Constructor being used"); };
Rational::~Rational() { puts("Destructor Called"); };
Rational& Rational::operator+ (const Rational& rhs) {
	if (denominator == rhs.denominator) {
		this->numberator = this->numberator + rhs.numberator;
	}
	return *this;
}
void Rational::print() {
	printf("The Rational value is: %d/%d\n", numberator, denominator);
}