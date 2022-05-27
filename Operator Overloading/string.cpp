#include <string>
#include <iostream>
#include "string.h"

//Default Constructor
Mystring::Mystring() : str { nullptr } { 
	str = new char[1]; 
	*str = '\0';
}

//Overloaded Constructor
Mystring::Mystring(const char* s) : str{ nullptr } {
	//If empty string is passed in
	if (s == nullptr) {			//If string empty
		str = new char[1];		//create just a string of length 1
		*str = '\0';			//with just a null terminator
	}
	else {
		str = new char[std::strlen(s) + 1];		//Create C string of length s+1
		strcpy_s(str, strlen(s) + 1, s);		//Copy String to str
	}
}

//Overloaded Copy Constructor
Mystring::Mystring(const Mystring& source) : str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	strcpy_s(str, strlen(source.str) + 1, source.str);

}

//Destructor
Mystring::~Mystring() {
	delete[]str;
}

//Mystring Member Functions
void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}
int Mystring::get_length() const {
	return (int)std::strlen(str);
}
const char* Mystring::get_str() const {
	return str;
}


Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Using Overloaded Assignment Operator" << std::endl;

	if (this == &rhs) {		//Check to make sure we arent assigning to ourselves
		return *this;		// - if so, return left had object
	}

	delete[] this->str;		//Deallocate the storage space already given to the Object
	
	str = new char[strlen(rhs.str) + 1];	//Allocate space for right handside string including null terminator
	
	strcpy_s(this->str, strlen(rhs.str) + 1, rhs.str);	//Copy cstring over to left side object

	return *this;		//Return a Reference(address) to the left hand side object
}

//Overloaded Move Operator
// --> Much more efficient then copy constructor
Mystring& Mystring::operator=(Mystring&& rhs) {		//&& means we want and R-value (variable without a name)
	std::cout << "Using Overloaded Move Operator" << std::endl;
	//Creating and Object based on an R-value reference */
	
	if (this == &rhs) {		//Check to make sure we arent assigning to ourselves
		return *this;		//Return left Mystring Object reference
	}
	delete[]str;		//Delete existing heap memory

	str = rhs.str;		//point string at rhs objects heap memory
	rhs.str = nullptr;	//Null out the rhs object str

	return *this;		//Return left object
}

/* Unary Operator Overload as a member method */
Mystring Mystring::operator-() const {
	std::cout << "Using Overloaded Unary Minus Operator" << std::endl;

	char* buff = new char[strlen(str) + 1];		//Create a buffer to hold Uppercase String

	strcpy_s(buff, strlen(str)+1, str);			//Copy Upper Case string to buffer

	for (int i = 0; i < strlen(buff); i++) {	//Loop through string one at a time and make lower case
		buff[i] = std::tolower(buff[i]);		//To Lowercase function
	}

	Mystring temp{ buff };						//put the cstring into a Mystring Object

	delete[] buff;								//Release buffer resource

	return temp;								//Return the Mystring Object
}

/* Binary Operator Overload as member methods */
Mystring Mystring::operator+(const Mystring & rhs) const {
	std::cout << "Using Overloaded Binary Addition Operator" << std::endl;
	
	int length = strlen(str) + strlen(rhs.str) + 1;		//Get total needed buffer length
	
	char* buff = new char[length];						//Create Buffer
	
	strcpy_s(buff, length*sizeof(char), rhs.str);		//Copy first String into buffer
	strcat_s(str, length*sizeof(char), rhs.str);		//Concatenate the buffer string and the right hand side string
	
	Mystring temp{buff};								//Create Mystring object with buffer string
	
	delete[]buff;										//Release buffer resources
	
	return temp;										//Return Mystring object
}


bool Mystring::operator==(const Mystring& rhs) const {
	return (strcmp(str, rhs.str)==0);
}

/*
Mystring operator+(const Mystring& lhs, const Mystring& rhs) {
	int length = strlen(lhs.str) + strlen(rhs.str) + 1;
	char* buff = new char[length];
	strcpy_s(buff, strlen(lhs.str), lhs.str);
	strcat_s(buff, length * sizeof(char), rhs.str);

	Mystring temp{ buff };
	delete[] buff;
	return temp;
}
*/