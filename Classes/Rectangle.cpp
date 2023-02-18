#include "Rectangle.h"
#include <iostream>

//Default Constructor
Rectangle::Rectangle() {
	x = new int(0);
	y = new int(0);
}

//Parameterized Constructor
Rectangle::Rectangle(int a, int b) {
	x = new int;
	y = new int;
	*x = a;
	*y = b;
}

//--------------------------------------------------------
// CONSTRUCTORS that copy all data contained in another object to the data members
// of the current object.

//Copy Constructor
Rectangle::Rectangle(const Rectangle& obj) {
	x = new int;
	y = new int;
	*x = *obj.x;
	*y = *obj.y;
}

//Copy Assignment Constructor
Rectangle& Rectangle::operator=(const Rectangle& obj) {
	Rectangle temp;
	*temp.x = *obj.x;
	*temp.y = *obj.y;
	return temp;
}

//DESTRUCTOR
// - prevents memory leaks by freeing up resources of the class when destructed
Rectangle::~Rectangle() {
	std::cout << "Deleting Resources of CRectangle" << std::endl;
	std::cout << "Deleting X at address: " << &x << std::endl;
	delete x;
	std::cout << "Deleting Y at address: " << &y << std::endl;
	delete y;
	x = NULL;
	y = NULL;
}

void Rectangle::setMemberVals(int a, int b) {
	if (*x) *x = a;
	if (*y) *y = b;
}

int Rectangle::area() {
	return *x * *y;
}