#pragma once
#include "Shape.h"
class Triangle : public Shape
{
public:
	double getArea();
};


#include "Triangle.h"
double Triangle::getArea() {
	return (height * width) / 2;
}

