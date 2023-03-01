#pragma once
#ifndef GENERIC_CLASS_TEMPLATE_HPP
#define GENERIC_CLASS_TEMPLATE_HPP
// Class Header



// Class Template Prototypes
// -------------------------

template<typename t>
class Generic_Template {
	t a;
	t b;
public:
	Generic_Template(t a, t b);
	t add();
	t sub();
};
// -------------------------

template<typename T, int N>
class TemplateArray {
private:
	T m_Array_Stack[N];
public:
	int GetSize() const;

};
// -------------------------

template <class T, int N>
class mysequence {
	T memblock[N];
public:
	void setmember(int, T);
	T getmember(int);
};

// -------------------------
// -------------------------
// -------------------------

void GenericClassRun();


#endif


