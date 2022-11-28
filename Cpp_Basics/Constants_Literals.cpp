#include <iostream>
#include "Constants_Literals.h"

//First way of defining constants
#define	LENGTH	10
#define WIDTH	5
#define	NEWLINE '\n'

void RunIntegerLiterals() {
	float decimal = 8;
	int octal = 012;	//Preseeded with a zero
	int usigned = 215u;
	int hexadecimal = 0x4b;
	int longInt = 40l;
	int unsignedLong = 30ul;
	double floatingpointLiterals = 3.14159;
	long double floatingpointLiterals2 = 214159E-5L;	
}

void DefiningConstants() {
	int area;
	area = LENGTH * WIDTH;
	std::cout << area;
	std::cout << NEWLINE;

	const int CONSTANT = 10;
	const int NEWCONSTANT = 5;
}

void DataTypeModifiers() {
	/*C++ allows the char, int, and double data types to have modifiers preceding them. A modifier is used
	* to alter the meaning of the ase type so that it more precisely fits the needs of various situations.
	* 
	*	Modifiers
	*		- signed
	*		- unsigned
	*		- long
	*		- short
	* 
	*	Int base allows signed, unsigned, long, and short
	*		- unsigned long int a
	*		- signed int a
	*		- long int a
	*		- short int a
	*	Char base allows signed and unsigned
	*		- signed char c
	*		- unsigned char c
	*	Double base allows long
	*		- long double int a
	*/

	unsigned x = 0;
	unsigned int y = 0;
	short int i = 0;
	short unsigned int j = 0;
	unsigned short int k = 0;

	/*
	* const - Object of type const cannot be changed by your program during execution
	* volatile - Tells the compiler that a variables value may be changed in ways not 
				explicitly specified by the program.
	  restrict - A pointer qualified by restrict is initially the only means by which
					the object it points to can be accessed. Only C99 adds a new type
					qualified called restrict.
	*/

}

void StorageClasses() {
	/* Storage Classes define the scope (visibility) and life-time of variables and/or
	*	functions within a C++ Program. These specifiers precede the type that they modify. 
	*	There are following storage classes, which can be used in a c++ program
	*		- auto		<--- Default storage class for all local variables
	*		- register	
	*		- static
	*		- extern
	*		- mutable
	* 
	*		int mount;
	*		auto int month;
	* 
	*	auto-----------------------------------------------------------------------------------
	*	Can only be used within functions, i.e., local variables
	* 
	*	register-------------------------------------------------------------------------------
	*	Used to define local variables that should be stored in a register instead of RAM. This means
	*	that the variable has a maximum size equal to the register size (usually one word) and can't have
	*	the unary '&' operator applied to it (as it does not have a memory location)
	* 
	*	static---------------------------------------------------------------------------------
	*	Instructs the compiler to keep a local variable in existence during the life-time of the program
	*	instead of creating and destroying it each time it comes into the goes out of scope. Therefor, making
	*	local variables static allows them to maintain their values between function calls.
	*	
	*	The static modifier may also be applied to global variables. When this is done, it causes that variable's
	*	scope to be restricted to the file in which it is declared.
	* 
	*	When static is used on a class data member, it causes only one copy of that member to be shared by all
	*	object of its class.
	* 
	*	extern----------------------------------------------------------------------------------
	*	Used to give a reference of a global variable that is visible to ALL the program files. 
	*	When you use 'extern' the variable cannot be initialized because all it does is point
	*	the variable name at a storage location that has been previously defined. 
	*/
}

