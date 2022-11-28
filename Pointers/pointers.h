#pragma once
/*
*	POINTERS
*		- Variables that store addresses of another variable
* 
*	Pointers are strongly typed meaning that the pointers need to be of the same type
*	that the pointer points to. This is because when we need to dereference (access/modify value), 
*	
*/
class Box {
private:
	int m_width;
	int m_height;
public:
	Box(int w, int h);
	void addToWidth(int w);
	void addToHeight(int h);
	void PrintDimensions();
};

void PointerBasics();
void PointerArithmetic();
void PointerToPointer();
void PointerAsFunctionArguments();	//Call by Reference
void PointersAndArrays();
void ArraysAsFunctionArguments();
void CharacterArraysAndPointers();
void CharacterArraysAndPointersPart2();
void PointersAndMultidimensionalArrays();
void PointersAndDynamicMemory();
void PointersAsFunctionReturns();
void FunctionPointers();