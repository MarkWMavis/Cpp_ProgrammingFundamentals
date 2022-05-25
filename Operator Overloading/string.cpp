#include <string>
#include <iostream>
#include "string.h"

Mystring::Mystring() : str { nullptr } { 
	str = new char[1]; 
	*str = '\0';
}
Mystring::Mystring(const char* s) : str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		strcpy_s(str, strlen(s) + 1, s);
	}
}
//Copy Constructor
Mystring::Mystring(const Mystring& source) : str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	strcpy_s(str, strlen(source.str) + 1, source.str);

}
Mystring::~Mystring() {
	//delete str;
}
void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}
int Mystring::get_length() const {
	return (int)std::strlen(str);
}
const char* Mystring::get_str() const {
	return str;
}
//Type &Type::operator=(const Type &rhs);
Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Using Copy Constructor" << std::endl;
	if (this == &rhs) {		//Check to make sure we arent assigning to ourselves
		return *this;		// - if so, return left had object
	}
	delete[] this->str;		//Deallocate the storage space already given to the Object
	str = new char[strlen(rhs.str) + 1];	//Allocate space for right handside string including null terminator
	strcpy_s(this->str, strlen(rhs.str) + 1, rhs.str);	//Copy cstring over to left side object

	return *this;
}
//Move Constructor---------------------------------
//Creating and Object based on an R-value reference
Mystring& Mystring::operator=(Mystring&& rhs) {
	
	std::cout << "Using Move Constructor" << std::endl;
	if (this == &rhs) { return *this; }
	str = nullptr;		//Delete existing heap memory
	str = rhs.str;		//point string at rhs objects heap memory
	rhs.str = nullptr;	//Null out the rhs object str
	return *this;		//Return left object

}
Mystring Mystring::operator-() const {

	char* buff = new char[strlen(str) + 1];

	strcpy_s(buff, strlen(str)+1, str);

	for (int i = 0; i < strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}

	Mystring temp{ buff };

	delete[] buff;

	return temp;
}

Mystring Mystring::operator+(const Mystring& rhs) const {
	int length = strlen(str) + strlen(rhs.str) + 1;
	char* buff = new char[length];
	strcpy_s(buff, length*sizeof(char), rhs.str);
	strcat_s(str, length*sizeof(char), rhs.str);
	Mystring temp{buff};
	delete[]buff;
	return temp;
}

//Mystring Mystring::operator-(const Mystring& rhs) const {
//
//}

bool Mystring::operator==(const Mystring& rhs) const {
	return (strcmp(str, rhs.str)==0);
}

//bool Mystring::operator<(const Mystring& rhs) const {
//
//}
