#pragma once


struct PublicConstructor {
	short int pi1 = 0;
	short int pi2 = 0;
	short int pi3 = 0;
	PublicConstructor(int a, int b, int c) : pi1(a), pi2(b), pi3(c) {};

	void setpi1(const int value);
	void setpi2(int value);
	void setpi3(int value);
	int getpi1() const;
	int getpi2() const;
	int getpi3() const;
};


void PublicConstructorDemo();
