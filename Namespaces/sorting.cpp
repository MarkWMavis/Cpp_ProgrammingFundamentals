#include "namespaces_nested.hpp"

void namespaces::sorting::Quicksort() {}
void namespaces::sorting::Insertionsort() {}
void namespaces::sorting::Mergesort() {
	int a = 10;
	int b = 22;
	if (sorting::comparison::Greater(a, b)) {

	}
	else {
		internalFunction();
	}
}
bool namespaces::sorting::comparison::Greater(int x, int y) {
	if (x > y) return true;
	return false;
}

void namespaces::sorting::comparison::less() {
}