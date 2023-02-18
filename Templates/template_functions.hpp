#pragma once
#include <iostream>

template<typename T>
void Print_Template(const T argument);

template<typename T>
T getMax(T& a, T& b);



template<typename T>
void Print_Template(const T argument) {
	std::cout << argument << std::endl;
}

template<typename T>
T getMax(T& a, T& b) {
	return a > b ? a : b;
}