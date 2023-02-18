#include"Array_Basics.hpp"
#include<iostream>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		if (i < (size-1)) std::cout << " ";
	}
	std::cout << std::endl;
}

void initialArray(int &arr, int size) {
	std::cout << "Please enter " << size << " values" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> arr;
		arr++;
	}
}
