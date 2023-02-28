#include "Garage.hpp"
#include "Car.hpp"

#include <stdlib.h>
using std::atoi;

Garage::Garage(string filename) {

	ifstream inputFile;
	inputFile.open(filename);
	
	int n;
	inputFile >> n;
	inputFile.ignore();
	
	int idx = 0;
	for (idx = 0; idx < n; idx++) {
		string make, model, hp;

		getline(inputFile, make, ',');
		getline(inputFile, model, ',');
		getline(inputFile, hp);
		
		Car temp(make, model, stoi(hp));
		inventory.push_back(temp);
	}
}

void Garage::DisplayInventory() {
	cout << "Inventory List...." << endl;
	for (int carIdx = 0; carIdx< inventory.size(); carIdx++) {
		inventory[carIdx].Display();
	}
}