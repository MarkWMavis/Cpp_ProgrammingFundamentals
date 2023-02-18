#include <cstdio>
#include <cstdint>

void printp(uint8_t* p) {
	printf("pointer address is %p, value is %d\n", p, *p);
}


int main() {

	int x = 5;
	puts("Pre-Increment looks like...");
	printf("X: %d\n", ++x);	//x is first incremented and then returned
	printf("X: %d\n", ++x);	//x is first incremented and then returned
	printf("X: %d\n", ++x);	//x is first incremented and then returned
	printf("Final value of X: %d\n", x);

	x = 5;
	puts("Post-Increment looks like...");
	printf("X: %d\n", x++);	//x is first returned and then incremented
	printf("X: %d\n", x++);	//x is first returned and then incremented
	printf("X: %d\n", x++);	//x is first returned and then incremented
	printf("Final value of X: %d\n", x);

	x = 5;
	puts("Pre-Decrement looks like...");
	printf("X: %d\n", --x);	//x is first decremented and then returned
	printf("X: %d\n", --x);	//x is first decremented and then returned
	printf("X: %d\n", --x);	//x is first decremented and then returned
	printf("Final value of X: %d\n", x);

	x = 5;
	puts("Post-Decrement looks like...");
	printf("X: %d\n", x--);	//x is first returned and then decremented
	printf("X: %d\n", x--);	//x is first returned and then decremented
	printf("X: %d\n", x--);	//x is first returned and then decremented
	printf("Final value of X: %d\n", x);

	uint8_t arr[5] = { 1, 2, 3, 4, 5 };
	uint8_t* pointer = arr;
	printf("Post Increment\n");
	printp(pointer++);
	printp(pointer++);
	printp(pointer++);
	printp(pointer++);
	printf("Final pointer address is %p and value of pointer is %d\n", pointer, *pointer);

	printf("Pre Increment\n");
	printp(--pointer);
	printp(--pointer);
	printp(--pointer);
	printp(--pointer);
	printf("Final pointer address is %p and value of pointer is %d\n", pointer, *pointer);





	return 0;