#pragma once

//Class Template --------------------

template<typename T>
class Container {
private:
	T element;
public:
	Container(T arg) {
		element = arg;
	}

	T increase() {
		return ++element;
	}
};


//Class Template Specialization -----------------

template<>
class Container <char> {
	char element;
public:
	Container(char arg) {
		element = arg;
	}
	char uppercase() {
		//If element has a lowercase ASCII code
		if ((element >= 'a') && (element <= 'z')) {

			//Subtract lowercase ASCII from Uppercase ASCII and add it to the 
			// element ASCII.
			element += 'A' - 'a';

			//return element
			return element;
		}
		return element;
	}
};
