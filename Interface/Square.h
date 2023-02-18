#pragma once
#include "Quadrilateral.h"

/* Purpose of Abstract Classes are to provide an appropriate base class from which other classes
* can inherit. Abstract classes cannot be used to instantiate objects and serves only as an
* interface.
*/
class Square : public Quadrilateral {
public:
	double getVolume();
};
double Square::getVolume() {
	return m_length * m_height * m_breadth;
}