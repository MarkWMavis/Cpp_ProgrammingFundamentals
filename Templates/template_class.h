#pragma once


template<typename T, int N>
class TemplateArray {
private:
	T m_Array_Stack[N];
public:
	int GetSize() const;

};


template<typename T, int N>
int TemplateArray<T, N>::GetSize() const {
	return N;
}




/*
 * Custom Sequence
 */

//Class Template Prototype
template <class T, int N>
class mysequence {
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};

//Class Member Function Implementation
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
	memblock[x] = value;
}

//Class Member Function Implementation
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
	return memblock[x];
}