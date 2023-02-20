#pragma once
class Box {
private:
	int m_width;
	int m_height;
public:
	Box(int w, int h);
	void addToWidth(int w);
	void addToHeight(int h);
	void PrintDimensions();
};

void IncrementBoxDimensions(Box& b, int width, int height);