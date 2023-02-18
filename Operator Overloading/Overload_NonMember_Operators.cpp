#include "Overload_NonMember_Operators.h"
#include <string>


// Mystring Class Friended Operator Overloads
Mystring2 operator+(const Mystring2& lhs, const Mystring2& rhs) {
	size_t buff_len = strlen(lhs.str) + strlen(rhs.str) + 1;
	char* buff = new char[buff_len];
	strcpy_s(buff, buff_len * sizeof(char), lhs.str);
	strcat_s(buff, buff_len * sizeof(char), rhs.str);
	Mystring2 temp{ buff };
	delete[]buff;
	return temp;
}
Mystring2 operator-(const Mystring2& Obj) {
	size_t buff_len = strlen(Obj.str) + 1;
	char* buff = new char[buff_len];
	strcpy_s(buff, buff_len*sizeof(char), Obj.str);
	for (size_t i = 0; i < buff_len - 1; i++) {
		buff[i] = tolower(buff[i]);
	}
	Mystring2 temp{ buff };
	delete[]buff;
	return temp;
}
bool operator==(const Mystring2& lhs, const Mystring2& rhs) {
	return (strcmp(lhs.str, rhs.str) == 0);
}

//Overloaded Extraction Operator
std::ostream& operator<<(std::ostream& os, const Mystring2& obj) {
	os << obj.get_str();
	return os;
}

//Overloaded Insertion Operator
std::istream& operator>>(std::istream& is, Mystring2& obj) {
	char* buff = new char[1000];
	is >> buff;
	obj = Mystring2{ buff };
	delete[]buff;
	return is;

}
// Mystring Class Implementations
Mystring2::Mystring2() : str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

//Overloaded Constructor
Mystring2::Mystring2(const char* s) : str{ nullptr } {
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
Mystring2::Mystring2(const Mystring2& source) : str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	strcpy_s(str, strlen(source.str) + 1, source.str);

}

//Destructor
Mystring2::~Mystring2() {
	delete[]str;
}

//Mystring Member Functions
void Mystring2::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}
int Mystring2::get_length() const {
	return (int)std::strlen(str);
}
const char* Mystring2::get_str() const {
	return str;
}

Mystring2& Mystring2::operator=(const Mystring2& rhs) {
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
Mystring2& Mystring2::operator=(Mystring2&& rhs) {		//&& means we want and R-value (variable without a name)
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
