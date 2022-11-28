#include "Overloading.h"
#include <iostream>
//PrintData Class Members Implementations
void PrintData::print(int i) { std::cout << "Printing int: " << i << std::endl; }
void PrintData::print(double f) { std::cout << "Printing int: " << f << std::endl; }
void PrintData::print(const char* c) { std::cout << "Printing character: " << c << std::endl; }

//Square Class Members Implementations
void Square::setHeight(double h) { height = h; }
void Square::setWidth(double w) { width = w; }
void Square::printDimensions() {
	std::cout << "Address: " << this << std::endl;
	std::cout << "Width: " << width << std::endl;
	std::cout << "Height: " << height << std::endl;
}

Square::Square() {};
Square::Square(double w, double h) {
	width = w;
	height = h;
}

/*
Square Square::operator+(const Square& s) { 
	std::cout << "Objects Addresses: " << std::endl;
	std::cout << "\t" << this << std::endl;
	std::cout << "\t" << &s << std::endl;

	std::cout << this->width << " + " << s.width << std::endl;
	std::cout << this->height << " + " << s.height << std::endl;

	Square newSquare;
	newSquare.setHeight(this->height + s.height);
	newSquare.setWidth(this->width + s.width);

	std::cout << "New Width: " << newSquare.width << std::endl;
	std::cout << "New height: " << newSquare.height << std::endl;

	return newSquare;
}
*/

Square operator+(const Square & lhs, const Square & rhs) {
	return Square(lhs.width + rhs.width, lhs.height+rhs.height);
}

void RunOverloading() {
	PrintData pd;
	pd.print(5);
	pd.print(500.264);
	pd.print("Hello C++");

	Square s1;
	s1.setHeight(7.6);
	s1.setWidth(5.4);
	s1.printDimensions();
	
	Square s2;
	s2.setHeight(3.2);
	s2.setWidth(5.2);
	s2.printDimensions();
	
	Square s3 = s1 + s2;

}