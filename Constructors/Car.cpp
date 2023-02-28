#include "Car.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <format>
using std::format;

Car::Car() : _make("Unknown"), _model("Unknown"), _hp(0) {};

Car::Car(int h) : _make("Unknown"), _model("Unknown"), _hp(h){};

Car::Car(string mk, string md) : _make(mk), _model(md), _hp(0) {};
Car::Car(string mk, string md, int h ) : _make(mk), _model(md), _hp(h) {};
Car::Car(const Car& c) : _make(c._make), _model(c._model), _hp(c._hp) {};


void Car::Display() {
	
	//This line is long and cumbersome
	//cout << "Make: " << _make << " Model: " << _model << " Hp: " << _hp << endl;

	//Use the new format function which returns a string
	cout << format("Make: {} Model: {} Hp: {}\n", _make, _model, _hp);
	
	
}
