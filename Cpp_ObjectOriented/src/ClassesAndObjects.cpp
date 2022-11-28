#include "include/ClassesAndObjects.h"
#include <iostream>

void Box::setLength(double l) { length = l; }
double Box::getLength() { return length; }
void Box::setBreadth(double b) { breadth = b; }
double Box::getBreadth() { return breadth; }
void Box::setHeight(double h) { height = h; }
double Box::getHeight() { return height; }

Box::Box() {
	length = 0.0;
	breadth = 0.0;
	height = 0.0;
}
Box::~Box() {

}

void RunClassesAndObjects() {
	Box box1;		//Declare Box1 of type box
	Box box2;		//Declare Box2 of type box
	double volume = 0.0;		//Store the volume of a box here

	box1.setHeight(5.0);
	box1.setBreadth(6.0);
	box1.setLength(7.0);

	box2.setHeight(10.0);
	box2.setBreadth(12.0);
	box2.setLength(13.0);

	volume = box1.getHeight() * box1.getBreadth() * box1.getLength();
	std::cout << "Box1 Volume: " << volume << std::endl;

	volume = box2.getHeight() * box2.getBreadth() * box2.getLength();
	std::cout << "Box2 Volume: " << volume << std::endl;
}