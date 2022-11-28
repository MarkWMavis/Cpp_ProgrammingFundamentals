#pragma once

class Rational
{
private:
	int numberator = 0;
	int denominator = 1;
public:
	Rational();
	Rational(int n, int d);
	Rational(const Rational& rhs);
	~Rational();

	Rational& operator + (const Rational& rhs);

	void print();
};

