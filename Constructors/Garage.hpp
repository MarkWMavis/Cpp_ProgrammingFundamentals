
#include "Car.hpp"

#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using namespace std;

class Garage {
private:
	vector<Car> inventory;
public:
	Garage(string filename);
	void DisplayInventory();
};

