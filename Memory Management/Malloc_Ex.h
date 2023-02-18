#pragma once
#include <iostream>

int Malloc_Ex();


int MallocRun() {
	//returns space for 1 integers and is uninitialized
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL) {
		printf("Failed to allocate memory\n");
		return -1;
	}

	*p = 10;
	printf("%d\n", *p);
	free(p);
	p = NULL;

	return 1;
}