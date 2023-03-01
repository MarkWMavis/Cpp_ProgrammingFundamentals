#include "Generic_Class_Template.hpp"

#include <format>
using std::format;

#include <iostream>
using std::cout;


//Class Implementation
template<typename t>
Generic_Template<t>::Generic_Template(t a, t b) {
	this->a = a;
	this->b = b;
}
template<typename t>
t Generic_Template<t>::add() {
	return a + b;
}
template<typename t>
t Generic_Template<t>::sub() {
	return a - b;
}



template<typename T, int N>
int TemplateArray<T, N>::GetSize() const {
	return N;
}



//Class Member Function Implementation
template <class T, int N>
void mysequence<T, N>::setmember(int idx, T value) {
	memblock[idx] = value;
}
//Class Member Function Implementation
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
	return memblock[x];
}





void GenericClassRun() {
	// --------------------------------------------------
	//	Generic Template Class
	Generic_Template<int> intTemp(10, 14);
	Generic_Template<float> floatTemp(3.4f, 5.6f);
	Generic_Template<char> charTemp(35, 35);
	
	cout << format("intTemp.add(): {}\n", intTemp.add());
	cout << format("floatTemp.add(): {}\n", floatTemp.add());
	cout << format("charTem.add(): {}\n", (char)charTemp.add());

	// --------------------------------------------------
	//	Generic Template Class
	TemplateArray<int, 5> array1;
	TemplateArray<std::string, 50> array2;
	std::cout << "Array size is: " << array1.GetSize() << std::endl;
	std::cout << "Array size is: " << array2.GetSize() << std::endl;

	mysequence <int, 5> myints;         //Creating a Int array of size 5
	mysequence <double, 5> myfloats;    //Creating a Float array of size 5
	myints.setmember(0, 100);           //Assigning Element 0 to 100
	myfloats.setmember(3, 3.1416);      //Assigning Element 3 to 3.1416
	std::cout << myints.getmember(0) << '\n';    //Outputing value at index 0
	std::cout << myfloats.getmember(3) << '\n';  //Outputing value at index 3
}
