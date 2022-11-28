#include "Classes/Rectangle.h"
#include "Classes/Triangle.h"

#include <cstdlib>
#include <iostream>


int main() {
	Rectangle Rect;
	Rect.setHeight(10);
	Rect.setWidth(5);
	std::cout << "Rectangles area: " << Rect.getArea() << std::endl;

	Triangle Tri;
	Tri.setHeight(25.6);
	Tri.setWidth(19.23);
	std::cout << "Triangle area: " << Tri.getArea() << std::endl;

	return 0;
}