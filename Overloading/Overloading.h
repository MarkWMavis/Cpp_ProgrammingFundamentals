#pragma once

class PrintData {
public:
	//Overloaded functions
	void print(int i);
	void print(double f);
	void print(const char* c);
};

class Square {
public:
	void setWidth(double w);
	void setHeight(double h);
	void printDimensions();

	Square();
	Square(double w, double h);
	
	//Class Member Operator Overloading
	//Square operator+(const Square& s);
	
	//Friending the Non-Class Operator Overloader
	Square friend operator+(const Square& lhs, const Square& rhs);

protected:
	double width;
	double height;
};

//Non-Member Operator Overloading
//Square& operator+(const Square& lhs, const Square& rhs);

void RunOverloading();