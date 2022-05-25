#pragma once
#include <iostream>

template <typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
};

template <class T>
T min(T a, T b) {
	return (a < b) ? a : b;
}

//No limit to the number of Type Inputs
template <typename T1, typename T2, typename T3>
void max(T1 a, T2 b, T3 c) {

}

void genericprogramming_exercise01();