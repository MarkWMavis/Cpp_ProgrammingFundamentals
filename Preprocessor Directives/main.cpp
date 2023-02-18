// The preprocessor is where we are going to do something with the source code itslf
#include <math.h>
#include <array>
#include <iostream> //Copies the entire iostream file code and and places in here
                    //Which gives all of the functionality in that library
#define PI (3.14159)        //Anywhere PI is used in source code, the number is copied into the code
#define SHARED_MEMORY "MySharedMemory"      
#define ARRAY_SIZE (128)

int NumberArray[ARRAY_SIZE];


void printArray();


int main() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        NumberArray[i] = rand() % 100;
    }
    printArray();
}

void printArray() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Array Index %d had value %d", i, NumberArray[i]);
    }
}