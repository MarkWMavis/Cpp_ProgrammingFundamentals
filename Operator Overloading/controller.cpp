#include "controller.h"
#include "OverloadedMemberOperators.h"
#include "OverloadedNonMemberOperators.h"
#include <iostream>
using namespace std;

//Functions that implement the exerices using the Class that has Overloaded Member Operators
void OverloadingAssignmentOperator() {
	Mystring a{ "Hello" };		//Using overloaded constructor
	Mystring b;					//Using default constructor
	b = a;						//Using Copy Constructor
	
	b = "This is a test";
	
	a.display();
	b.display();
}
void OverloadingMoveOperator() {
	//Mystring s1;
	//s1 = Mystring{ "Frank" };
	
	Mystring a{ "Hello" };		//Overloaded constructor

	//For R-values --> we want to use Move Constructors over Copy Constructors because
	//	they are much more efficient.
	a = Mystring{ "Halo" };		//Overloaded constructor then move assignment
	a = "Bonjour";				//Overloaded constructor then move assignment
}
void OverloadingMemberOperators() {
	

	// Testing Unary Overloaded Operator (take no arguments)
	Mystring Paul{ "PAUL" };
	Mystring paul;
	Paul.display();
	paul = -Paul;
	Paul.display();


	// Testing Overloaded binary Operators (take one argument)

	//	Operator+ Test
	Mystring larry{ "Larry" };
	Mystring moe{ "Moe" };
	Mystring stooges{ " is one of the three stooges" };
	
	Mystring result = larry + stooges;		//larry.operator+(stooges);
	result.display();
	
	result = moe + " is also a stooge";		//moe.operator+(" is also a stooge");
	result.display();

	// Operator== Test
	Mystring Equal("Equal");
	Mystring equal("Equal");
	Mystring NotEqual("NotEqual");

	cout << (Equal == equal) << endl;
	cout << (Equal == NotEqual) << endl;



}



//FFunctions that implement the exerices using the Class that has Overloaded Non-Member Operators
void OverloadingNonMemberOperators() {
	Mystring2 larry{ "Larry" };
	Mystring2 moe{ "Moe" };
	Mystring2 stooges{ " is one of the three stooges" };
	Mystring2 message = larry + stooges;
	message.display();
	message = moe + " is also one of the stooges";
	message.display();
		
	Mystring2 a{ "Hello" };
	Mystring2 b{ " There" };
	Mystring2 result = a + b;

	result.display();

	Mystring2 lowerCase;
	Mystring2 upperCase{ "UPPER CASE" };
	lowerCase = -upperCase;
	lowerCase.display();

	Mystring2 markmavis{ "MARK MAVIS" };
	markmavis.display();
	markmavis = -markmavis;
	markmavis.display();

}
void OverloadingStreamInsertionAndExtraction() {
	Mystring2 string1{ "String 1" };
	Mystring2 string2{ "String 2" };

	cout << string1 << endl;
	cout << "This is " << string1 << " and this is " << string2 << endl;

	Mystring2 larry{ "Larry" };
	Mystring2 moe{ "Moe" };
	Mystring2 curly{};

	cout << "Enter the third stooge's first name ";
	cin >> curly;

	cout << "The three stooges names separated by a space: ";
	cin >> larry >> moe >> curly;

	cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

};

