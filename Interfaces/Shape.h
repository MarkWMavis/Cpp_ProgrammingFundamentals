#pragma once
class Shape
{
public:
	void setWidth(double w);
	void setHeight(double h);
protected:
	double width;
	double height;
};


void Shape::setWidth(double w) {
	this->width = w;
}
void Shape::setHeight(double h) {
	this->height = h;
}
