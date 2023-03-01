#pragma once
#include <vector>
using std::vector;

//The Generic Class Template --------------------
template<typename T>
class Container {
private:
	T element;
public:
	Container(T arg);
	T Increase();
};

//Class Template Specialization. This class depends on the Generic Class Template Prototype
// declared above; Any time an instance of a Container holding a char, this class will kick in.
template<>
class Container <char> {
	char element;
public:
	Container(char arg);
	char uppercase();
};


class Car {};
class Engin {};


template<typename T1, typename T2>
class Set {
	vector<T1> vectorType1;
	vector<T2> vectorType2;
public:
	Set(int);
};



void TemplateClassSpecialization();