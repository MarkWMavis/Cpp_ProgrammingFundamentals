#pragma once

// DECLARATION

class Shape
{
public:
	void setWidth(double w);
	void setHeight(double h);
	
	virtual double getArea() = 0;

protected:
	double width;
	double height;
};

//IMPLEMENTATION.....

void Shape::setWidth(double w) {
	this->width = w;
}
void Shape::setHeight(double h) {
	this->height = h;
}