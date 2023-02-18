#pragma once
#include <cstdio>

/// <summary>
/// Three types of Constructors
///		-- Default Constructors
///			*Class_name()
///		-- Parameterized Constructors
///			*Class_name(parameters)
///		-- Copy Constructors
///			*Class_name(const Class_name old_object)
///
/// </summary>

class Constructor {
private:

public:
	int pi1 = 10;
	int pi2 = 20;
	int pi3 = 30;
	Constructor() { puts("The Constructor was called"); }
	Constructor(int x, int y, int z) : pi1(x), pi2(y), pi3(z) {};

	~Constructor();

	Constructor& operator = (const Constructor&);

	void setpi1(int);
	void setpi2(int);
	void setpi3(int);
	int getpi1() const;		//This function can be used const objects because of its const signature
	int getpi2() const;
	int getpi3();			//This function can not be called by any non-const object
};

void ConstructorDemo();





