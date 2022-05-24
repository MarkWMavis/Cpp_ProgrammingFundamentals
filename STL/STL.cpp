#include "STL.h"
bool comparator(int first, int second) {
	return first < second;
}


void exercise01() {

	//Merge List
	std::list<int> list1{ 1, 70, 80 };
	std::list<int> list2{ 2, 3, 4 };

	list1.merge(list2, comparator);

	for (auto x : list1) {
		std::cout << x << std::endl;
	}


	//Sort Vector
	std::vector<int> v{ 1, 5, 3, 2, 6, 4 };
	std::sort(v.begin(), v.end());
	for (auto x : v) {
		std::cout << x << std::endl;
	}
	std::reverse(v.begin(), v.end());
	for (auto x : v) {
		std::cout << x << std::endl;
	}

	//Accumulate Function
	int sum{};
	sum = accumulate(v.begin(), v.end(), 0);
	printf("Vector sum: %d", sum);
}

