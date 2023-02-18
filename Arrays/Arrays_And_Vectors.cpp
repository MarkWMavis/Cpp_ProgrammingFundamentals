#include "Arrays_And_Vectors.hpp"

#include <iostream>
#include <vector>

void single_dimensional_array::declare_array() {

	const int days_in_year{ 365 };
	const int days_in_week{ 7 };


	//declaring arrays
	int arr01[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char arr2[5]{ 'a','b','c','d','e' };
	int year[days_in_year];
	std::string week[days_in_week];

	std::cout << "Enter days of Week" << std::endl;
	for (int i = 0; i < days_in_week; i++) {
		std::cin >> week[i];
		//The index represents the offset of the array from its starting position
	}
	for (int i = 0; i < days_in_week; i++) {
		std::cout << week[i];
		if (i < days_in_week - 1) std::cout << ", ";
		//The index represents the offset of the array from its starting position
	}
}
void multi_dimensional_array::declare_array() {
	//3rowsx4cols matrix
	int movie_rating[3][4]{
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	};
}
void single_dimensional_vector::declare_vector() {
	std::vector<char> vowels(5);			//Creating a vector of 5 characters
	std::vector<int>	test_scores(10);	//Creating a vector of 10 integers all set to 0

	std::vector<char> vowels1{ 'a', 'e', 'i', 'o', 'u' };
	std::vector<int> test_scores1{ 100, 98, 89, 85, 93 };
	std::vector<double> hi_temperatures{ 365, 80.0 };

	std::cout << "High Temp 01: " << hi_temperatures[0] << std::endl;
	std::cout << "High Temp 01: " << hi_temperatures[1] << std::endl;

	std::cout << "Test Score 01: " << test_scores1.at(0) << std::endl;
	std::cout << "Test Score 02: " << test_scores1.at(1) << std::endl;
	std::cout << "Test Score 03: " << test_scores1.at(2) << std::endl;
	std::cout << "Test Score 04: " << test_scores1.at(3) << std::endl;

	test_scores1.at(3) = 78;

	std::cout << "Test Score 04: " << test_scores1.at(3) << std::endl;

	test_scores1.push_back(68);
	test_scores1.push_back(99);

	std::cout << "Test Score 05: " << test_scores1.at(4) << std::endl;
	std::cout << "Test Score 06: " << test_scores1.at(5) << std::endl;
	std::cout << "Test Score 07: " << test_scores1.at(6) << std::endl;

	std::cout << "Test Scores Size: " << test_scores1.size() << std::endl;
}

void multi_dimensional_vector::declare_vector() {
	//Vector of Vectors
	std::vector<std::vector<int>> multi_vector{
		{100, 222, 333, 545},
		{100, 222, 333, 545},
		{100, 222, 333, 545}
	};

	std::cout << "Reviewer 1, Movie 2 score: " << multi_vector[0][1] << std::endl;
}

void challenge::exercise() {
	std::vector<int> vector1;
	std::vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << vector1.at(0) << std::endl;
	std::cout << vector1.at(1) << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);
	std::cout << vector2.at(0) << std::endl;
	std::cout << vector2.at(1) << std::endl;

	std::vector<std::vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	for (int i = 0; i < vector_2d[0].size(); i++) {
		for (int j = 0; j < vector_2d[1].size(); j++) {
			std::cout << vector_2d[i].at(j);
			if (j < vector_2d[1].size() - 1) {
				std::cout << ", ";
			}
			else {
				std::cout << std::endl;
			}
		}
	}
}