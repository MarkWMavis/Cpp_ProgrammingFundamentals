#include "Rectangle.h"
#include "Animal.h"
#include "Constructor.h"
#include "PublicConstructor.h"
#include "Box.hpp"
#include <iostream>


int main() {

	Rectangle rect1(100, 100);
	Rectangle rect2(rect1);
	std::cout << "Area of rect2 is: " << rect2.area() << std::endl;
	Rectangle rect3 = rect2;
	std::cout << "Area of rect3 is: " << rect3.area() << std::endl;
	


	// Class--------------------------------------------------
	
	rect3.setMemberVals(100, 1000);
	Rectangle c1(100, 100);

	rect1.setMemberVals(20, 40);
	rect2.setMemberVals(10, 15);

	std::cout << "Rect1 area: " << rect1.area() << std::endl;
	std::cout << "Rect2 area: " << rect2.area() << std::endl;
	std::cout << "Rect3 area: " << rect3.area() << std::endl;
	std::cout << "C1 area: " << c1.area() << std::endl;
	
	
	// Class Pointers--------------------------------------------------------
	Rectangle* prect = new Rectangle(15, 35);
	std::cout << "The area is: " << prect->area() << std::endl;

	BoxClassDemo();
	AnimalClassDemo();

	ConstructorDemo();
	PublicConstructorDemo();
	


}
