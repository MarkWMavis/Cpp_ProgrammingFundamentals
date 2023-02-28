#include "Fundamentals.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ios;

#include <vector>
using std::vector;

void FindThePoint() {
    ifstream inputFile;
    inputFile.open("FindThePoint.txt", ios::in);

    int numVectors, vecNum, vectIdx;
    inputFile >> numVectors;

    for (vecNum = 0; vecNum < numVectors; vecNum++) {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0, rise = 0, run = 0, x3 = 0, y3 = 0;

        inputFile >> x1 >> y1 >> x2 >> y2;
        
        rise = y2 - y1;
        run = x2 - x1;

        y3 = rise + y2;
        x3 = run + x2;
        
        cout << "(" << x3 << "," << y3 << ")" << endl;
    }
	
    

    

    
}
void MaximumDraws() {

}