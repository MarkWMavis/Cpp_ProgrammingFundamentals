
#ifndef _STRING_H_
#define _STRING_H_

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

	Mystring operator=(const char* s);
	Mystring operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);	//Double && says that the rhs is a r-value
	
	// Unary operators using a member method
	Mystring operator-() const;

	// Binary operators using member methods
	Mystring operator+(const Mystring& rhs) const;


	//Mystring operator-(const Mystring& rhs) const;
	bool operator==(const Mystring& rhs) const;
	//bool operator<(const Mystring& rhs) const;
	
	//friend Mystring operator+(const Mystring& lhs, const Mystring& rhs);
};

//Non-member Operator Overload
Mystring operator+(const Mystring& lhs, const Mystring& rhs);



#endif // !_OPERATOR_OVERLOADING_H_