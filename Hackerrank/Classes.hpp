#pragma once

#include <vector>
using std::vector;

#include <ostream>
using std::ostream;

class Student {
	vector<int> scores;
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
	friend ostream& operator<<(ostream&, const Box&);
};

ostream& operator<<(ostream&, const Box&);

void ClassesAndObjects();
void BoxIt();