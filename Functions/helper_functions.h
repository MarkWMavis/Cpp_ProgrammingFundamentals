#pragma once
#include "helper_classes.h"

#define PI 3.14159

/*
* A functions entire signature is what identifies it so the two volume funcitons below
*/
long volumeOfCube(const Cube& c) {
	return c.depth * c.height * c.width;
}
double volumeOfSphere(const Sphere& s) {
	return PI * s.radius * s.radius * s.height;
}
Cube createCube(const unsigned int height, const unsigned int width, const unsigned int depth) {

	const static Cube temp = { height, width, depth };
	return temp;
}