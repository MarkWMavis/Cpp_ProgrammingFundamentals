#include "OtherConcepts.hpp"

#include <iostream>
using std::cout;

#include <format>
using std::format;

template<typename T>
MyTemplate<T>::MyTemplate(T arg) {
	element = arg;
}

template<typename T>
T MyTemplate<T>::divideBy2() {
	return element /= 2;
}

template<typename T>
void MyTemplate<T>::Display() {
	cout << format("Element {}\n", element);
}