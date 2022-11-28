#pragma once
/* Interfaces in C++
*
* An interface describes the behavior or capabilities of a C++ class without committing to a
* particular implementation of that class.
*
* The C++ interfaces are implemented using abstract classes and these abstract classes should
* not be confused with data abstraction which is a concept of keeping implementation details
* seperate from associated data.
* 
* A class is made abstract by declaring at least one of its functions as pure virtual function.
* A pure virtual function is specified by planing "=0" in its declaration as follows...
*/


//Abstract Class
class Quadrilateral {
public:
	//pure virtual function
	virtual double getVolume() = 0;

	double getLength();
	double getHeight();
	double getBreadth();

protected:
	double m_length{};
	double m_height{};
	double m_breadth{};
};

double Quadrilateral::getLength() {
	return m_length;
}
double Quadrilateral::getHeight() {
	return m_height;
}
double Quadrilateral::getBreadth() {
	return m_breadth;
}




