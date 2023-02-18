#pragma once
#include <iostream>

int Calloc_Ex();


int Calloc_Ex() {
	// Allocates a block of memory for an array of num ellements
	// each of them size bytes long
	// Argument 1 - Number of elements
	// Argument 2 - size of bytes allocated for each element
	// All elements are initialized ot 0

	int* c = (int*)calloc(1, sizeof(int));
	if (c == NULL) {
		printf("Failed to allocate memory");
		return -1;
	}
	printf("%d\n", *c);
	*c = 26;
	printf("%d\n", *c);
	free(c);
	c = NULL;
	return 1;
}