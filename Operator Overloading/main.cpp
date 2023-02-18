#include "controller.h"

int main() {

	/*
	* The custom Mystring class was broken into two seperate classes in order to illustrate overloaded member and non-member operators since both can not exist on the
	* same class. The compiler will not know which Overloaded Operator to use.
	* 
	* Main controls the Controller .h file where each exercie is compartmentalized to keep the main clean and organized. 
	*/

	// Functions calling 
	OverloadingAssignmentOperator();
	OverloadingMoveOperator();
	OverloadingMemberOperators();
	OverloadingNonMemberOperators();
	OverloadingStreamInsertionAndExtraction();
	
	return 0;
}