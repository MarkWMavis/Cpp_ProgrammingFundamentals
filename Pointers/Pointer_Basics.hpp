#pragma once
#include "iostream"

// Helper Classes------------------------------------------------
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
//---------------------------------------------------------------

// Helper Functions----------------------------------------------
void CallByReferenceHelper(int* a);
void PointerAsFunctionArguments();
//---------------------------------------------------------------

void PointerBasics();
void PointerArithmetic();
void PointerToPointer();
void PointersAndArrays();
void ArraysAsFunctionArguments();
void CharacterArraysAndPointers();
void CharacterArraysAndPointersPart2();
void PointersAndMultidimensionalArrays();
void PointersAndDynamicMemory();
void PointersAsFunctionReturns();
void FunctionPointers();


void IncrementBoxDimensions(Box& b, int width, int height);
