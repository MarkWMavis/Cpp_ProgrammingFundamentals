#include "Fundamentals.hpp"

#include <cmath>

#include <format>
using std::format;

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
void Handshake(int n) {
    int handshakes = 0;
    for (int i = 1; i <= n; i++) {
        handshakes += n - i;
        cout << format("Handshakes: {}\n", (n - i));
    }
    cout << format("Handshake Total: {}\n", handshakes);
    cout << format("Handshakes: {}\n", (n*(n+1)/2)-n);
}
void MinimumHeightTriangle(int base, int area) {
        double height = (double)(2 * area)/base;
        height = ceil(height);
        cout << format("Height: {}\n", height);
}
void ArmyGame(int n, int m) {
    int colBaseDrops, rowBaseDrops;
    if (m % 2 == 0) {
        colBaseDrops = m / 2;
    }
    else {
        colBaseDrops = m / 2 + m%2;
    }

    if (n % 2 == 0) {
        rowBaseDrops = n / 2;
    }
    else {
        rowBaseDrops = n / 2 + n%2;
    }

    cout << format("Drops: {}\n", colBaseDrops * rowBaseDrops);
    
}
bool isPrime(int num) {
    for (int i = 0; i < num; i++) {
        if (num % i == 0 && (i != 1)) {
            return false;
        }
        else {
            
        }

    }
    return true;
}
void LeonardosPrimeFactors(int number) {

    for (int i = 1; i < number; i++) {
        if (isPrime(i)) {
            number /= i;
        }
    }
}