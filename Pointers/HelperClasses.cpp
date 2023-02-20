#include "HelperClasses.hpp"
#include <iostream>

void IncrementBoxDimensions(Box& b, int width, int height) {
	b.addToWidth(width);
	b.addToHeight(height);
}

Box::Box(int w = 0, int h = 0) :m_width{ w }, m_height{ h } {};
void Box::addToWidth(int w) { m_width += w; }
void Box::addToHeight(int h) { m_height += h; }
void Box::PrintDimensions() { printf("Height: %d Width: %d\n", m_height, m_width); }

