
#ifndef _OVERLOAD_MEMBER_OPERATORS_H_
#define _OVERLOAD_MEMBER_OPERATORS_H_

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

	// Unary operators using a member method
	Mystring operator-() const;

	// Binary operators using member methods
	Mystring operator+(const Mystring& rhs) const;
	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);
	bool operator==(const Mystring& rhs) const;
};

#endif