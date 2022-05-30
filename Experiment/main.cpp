#include "Person.h"



int main(){

	Person p1{ "Mark Mavis" , 206.6};
	Person p2{ "Rob Nelson" , 210.4 };
	p1.display_name();
	p2.display_name();

	Person Combined = p1 + p2;
	Combined.display_name();

	return 0;
}