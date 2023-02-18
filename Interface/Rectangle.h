#pragma once
#include "Shape.h"

class Rectangle : public Shape{
	public:
		double getArea();
};

double Rectangle::getArea() {
	return width * height;
}