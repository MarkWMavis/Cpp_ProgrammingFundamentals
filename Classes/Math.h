#pragma once
#ifndef MATH_H
#define MATH_H

class Math {
private:
public:
	void add(const int* a, const int* b);
	void add(const int& a, const int& b);
	int multiply(const int a, const int b);
	double multiply(const double a, const double b);
};

#endif // !MATH_H