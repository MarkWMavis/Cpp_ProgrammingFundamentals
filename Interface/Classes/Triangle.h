#pragma once
#include "Shape.h"

// DECLARATION

class Triangle : public Shape
{
public:
	double getArea();
};




//IMPLEMENTATION.....

double Triangle::getArea() {
	return (height * width) / 2;
}

