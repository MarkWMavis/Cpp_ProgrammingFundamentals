#pragma once
/*
	Abstraction

	Data abstraction refers to providing only essential information to the outside world and hiding their background 
	details, i.e., to represent the needed information in program without presenting the details.

	Data abstraction is a programming (and design) technique that relies on the separation of interface and implementation.

	Let's take one real life example of a TV, which you can turn on and off, change the channel, adjust the volume, and 
	add external components such as speakers, VCRs, and DVD players, BUT you do not know its internal details, that is, you 
	do not know how it receives signals over the air or through a cable, how it translates them, and finally displays them 
	on the screen.

	Thus, we can say a television clearly separates its internal implementation from its external interface and you can play 
	with its interfaces like the power button, channel changer, and volume control without having any knowledge of its internals.

	In C++, classes provides great level of data abstraction. They provide sufficient public methods to the outside world to 
	play with the functionality of the object and to manipulate object data, i.e., state without actually knowing how class 
	has been implemented internally.

	For example, your program can make a call to the sort() function without knowing what algorithm the function actually uses 
	to sort the given values. In fact, the underlying implementation of the sorting functionality could change between releases 
	of the library, and as long as the interface stays the same, your function call will still work.


*/

class Abstraction {
public:	/*
		public labels define class members as accessible to all parts of the program.
		The data abstraction view of a type is defined by its public members
		*/

private: /*
		 private labels define class members as NOT accessible to code that uses the class. The 
		 private sections hide the implementation from code that uses the type.
		 */
public:/*
	   There are no restrictions on how often an access label may appear.
	   */
};

/*	Benefits of Data Abstraction
*	
*	- Class internals are protected from inadvertent user-level errors, which might
*		corrupt the state of the object
*	- The class implementation may evolve over time in response to changing requirements 
*		or bug reports without requiring change in user-level code.
*/

/*	Abstraction Example:
	
	Any C++ program where you implement a class with public and private members is an
	example of data abstraction. Consider the following example
*/

class Adder {
public:
	Adder(int a);

	//Interfaces to the outside world so users can use the class
	void addNumber(int number);
	int getTotal();

private:
	//Hidden private member that the user doesn't need to know about.
	int m_total{};
};

void RunAbstraction();
