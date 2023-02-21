#pragma once
#include <vector>
#include <iostream>
#include <ostream>

class Student {
	std::vector<int> scores;
public:
	void input();
	int calculateTotalScore();
};

class Box {
	int l;
	int b;
	int h;

public:
	Box();
	Box(int, int, int);
	Box(Box&);
	int getLength();
	int getBreadth();
	int getHeight();
	long long CalculateVolume();
	bool operator<(Box&);
	friend std::ostream& operator<<(std::ostream&, const Box&);
};

std::ostream& operator<<(std::ostream&, const Box&);

