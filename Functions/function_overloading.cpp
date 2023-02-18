#include "function_overloading.hpp"

constexpr double pi = 3.141592653589793;

//Volume of a Cube
double volume(double a, double b, double c) {
	return a * b * c;
}
//Volume of a cylinder
double volume(double r, double h) {
	return pi * r * r * h;
}
//Volume of a Sphere
double volume(double r) {
	return (4.0f / 3.0f) * pi * (r * r * r);
}