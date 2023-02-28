#include "Car.hpp";
#include "Garage.hpp"

int main() {

	Garage garage("cars.txt");
	
	garage.DisplayInventory();

	return 0;
}