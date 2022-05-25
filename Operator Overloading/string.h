
#ifndef _STRING_H_
#define _STRING_H_

#define _CRT_SECURE_NO_WARNINGS


class Mystring {
private:
	char* str;
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	~Mystring();
	void display() const;
	int get_length() const;
	const char* get_str() const;

	Mystring& operator=(const Mystring& rhs);
	Mystring& operator+(const Mystring& rhs);


};
#endif // !_OPERATOR_OVERLOADING_H_