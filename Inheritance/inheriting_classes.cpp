#include "inheriting_classes.h"
#include <iostream>

//Base Class Implementation
void Shape::setWidth(double w) { width = w; }
void Shape::setHeight(double h) { height = h; }
void Shape::setDepth(double d) { depth = d; }

//Base Class Implementation
void Weight::setPounds(double p) { pounds = p; }

//Derived Class method implementation
double Rectangle::getArea() { return width * height * depth; }
double Rectangle::getWeight() { return pounds; }


//Run exercise function
void RunInheritance() {
	Rectangle Rect;
	
	//Setting Dimensions of Rectangle Object
	Rect.setHeight(7.3);
	Rect.setWidth(5.6);
	Rect.setDepth(10.4);
	
	//Setting Rectangle Objects weight per cubic inch
	Rect.setPounds(0.367);

	std::cout << "Total Volume (cubic inches): " << Rect.getArea() << std::endl;
	std::cout << "Rectangles Weight per cubic inch: " << Rect.getWeight() << "lbs" << std::endl;
	std::cout << "Total Weight (pounds): " << Rect.getArea() * Rect.getWeight() << std::endl;
};
