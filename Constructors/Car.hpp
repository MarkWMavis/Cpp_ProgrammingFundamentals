#pragma once
#include <string>
using std::string;


class Car {
private:
	string _make;
	string _model;
	int _hp;
public:
	/*---------DEFUALT CONSTRUCTOR-----------------*/
	Car();

	/*--------PARAMETERIZED CONSTRUCTORS-----------*/
	Car(int h);
	Car(string mk, string md);
	Car(string mk, string md, int h);

	/*----------COPY CONSTRUCTOR-------------------*/
	Car(const Car& c);

	void Display();
};












