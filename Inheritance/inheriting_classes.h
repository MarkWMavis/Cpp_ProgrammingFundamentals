#pragma once


class Shape {
public:
	void setWidth(double w);
	void setHeight(double h);
	void setDepth(double d);

protected:
	double width;
	double height;
	double depth;
};




class Weight {
public:
	void setPounds(double p);

protected:
	double pounds;
};



void RunInheritance();

//Multiple Inheritance from more than one class
class Rectangle : public Shape, public Weight {
public:
	double getArea();
	double getWeight();
};

/*
Type of Inheritance
When deriving a class from a base class, the base class may be inherited through public, protected or private inheritance. The type of inheritance is
specified by the access-specifier as explained above.We hardly use protected or private inheritance, but public inheritance is commonly used. While
using different type of inheritance, following rules are applied −
	Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected
							members of the base class become protected members of the derived class. A base class's private members are never accessible directly
							from a derived class, but can be accessed through calls to the public and protected members of the base class.
	Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.
	Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.
*/


