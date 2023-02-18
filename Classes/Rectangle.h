#pragma once
class Rectangle {
	int* x, * y;
public:
	Rectangle();
	Rectangle(int, int);
	Rectangle(const Rectangle&);
	Rectangle& operator=(const Rectangle&);
	~Rectangle();


	void setMemberVals(int, int);
	int area();
};

