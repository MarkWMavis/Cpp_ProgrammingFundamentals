#pragma once

/* Class Definitions
	When you define a class, you define a blueprint for a data type. A class
	defines what the class name means, that is, what an object of the class will
	consist of and what operations can be performed on such an object.
*/

class Box {
	/* Class Access Modifiers
		determines the access attributes of the members of the class that follows it.
		A public member can be accessed from outside the class anywhere within the scope
		of the class object. 
	
		- public
		- private
		- protected
	*/
public:	

	/* Constructor And Destructor
	* A class constructor is a special function in a class that is called when a new
	* object of the class is created. A destructor is also a special function which is
	* called when created object is deleted.
	*/
	Box();
	~Box();

	/* Copy Constructor
	* The copy constructor is a constructor which creates an object by initializing it with an 
	* object of the same class, which has been created previously.
	*/


	/* Class Member Functions
	*	Can be defined as public, private or protected. By default members would 
	*	be assumed as private
	*/
	
	void setLength(double l);
	double getLength();

	void setBreadth(double b);
	double getBreadth();

	void setHeight(double h);
	double getHeight();


	/* Friend Functions
	*	A friend function is permitted full access to private and protected members of a class
	*/

	/* Inline Functions
	*	With an inline function, the compiler tries to expand the code in the body of the
	*	function in place of a class to the function. 
	*/

	/* this Pointer
	*	Every object has a special pointer this which points to the object itself.
	*/

	/* Pointer to C++ Classes
	*	A Pointer to a class is done exactly the same way a pointer to a structure is. 
	*	In fact a class is really just a structure with functions in it.
	*/

	/* Static Members of a Class
	*	Both data members and function member of a class can be declared as static
	*/

protected:	//Can not be accessed directly using direct member access operator (.)
private:	//Can not be accessed directly using direct member access operator (.)
	double length;	//length of box
	double breadth;	//Breadth of box
	double height;	//Height of box

/*
*
*	1. Class Member Functions
*
*
*
*/

};

void RunClassesAndObjects();