#pragma once
/*
	A class is an expanded concept of a data structure: Instead of only holding data, it
	can hold both data and functions

	An Object is an instantiation of a class. In terms of variables, a class would be the type,
	and an object would be the variable.
*/
//Classes are generally declared using the keyword class, with the following format


class class_name {		//Class name (Type) is the valid Identifier
	//Access Specifier 1:
		//member1;
	//Access Specifier 2:
		//member2;
} object_names;			//Object_names (variable) is an optional list of names for objects of this class.


//The body declaration contains members, that can either be data or function declarations, and 
//	optionally access specifiers.

/* ACCESS SPECIFIERS
*	- private
*		Members of a class are accessible only from within other members of the same
		class or from their friends.
*	- public
		members accessible from anywhere where the object is visible.
*	- protected
		members are accessible from members of their same class and from their
		friends, but also from members of their derived classes.
*/