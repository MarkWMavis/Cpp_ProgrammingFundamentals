#pragma once
#ifndef GENERIC_TEMPLATE_HPP
#define GENERIC_TEMPLATE_HPP


//Class Header
template<typename t>
class Generic_Template {
	t a;
	t b;
public:
	Generic_Template(t a, t b);
	t add();
	t sub();
};

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
#endif
