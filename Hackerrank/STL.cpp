#include "STL.hpp"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <set>
using std::set;

#include <map>
using std::multimap;
using std::pair;

#include <sstream>
using std::stringstream;

#include <fstream>
using std::ifstream;
using std::ios; // Input file stream mode flag. One of several flags
                // Specifies that the file should be opened in input mode.
                // This means is can be read from but not written to.

#include <numeric>
using std::accumulate;

#include <algorithm>
using std::sort;

#include <algorithm>
using std::min;


void VectorSort() {
    int n, i;
    cin >> n;
    vector<int> v;
    for (i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
void Vector_Erase() {

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int idxMin, idxMax;

    cin >> idxMin;
    v.erase(v.begin() + (idxMin - 1));

    cin >> idxMin >> idxMax;
    v.erase(v.begin() + (idxMin - 1), v.begin() + (idxMax - 1));

    cout << v.size() << endl;

    for (int x : v) {
        cout << x << " ";
    }
}
void LowerBoundSTL() {

    int numOfInts, i;
    cin >> numOfInts;
    vector<int> v;

    int temp;
    for (i = 0; i < numOfInts; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    int numOfQuerys;
    cin >> numOfQuerys;
    for (i = 0; i < numOfQuerys; i++) {
        cin >> temp;
        vector<int>::iterator it = std::lower_bound(v.begin(), v.end(), temp);

        if (*it == temp) {
            cout << "YES " << (it - v.begin()) + 1 << endl;
        }
        else {
            cout << "NO " << (it - v.begin()) + 1 << endl;
        }
    }
}

void Sets_STL() {
    int queryCount = 0, i = 0;
    cin >> queryCount;

    set<int> s;

    for (i = 0; i < queryCount; i++) {
        int y, x;
        cin >> y >> x;

        if (y == 1) {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else {
            set<int>::iterator it = s.find(x);
            if (it != s.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            
        }
    }
}
void Maps_STL() {

    ifstream inputFile;
    inputFile.open("Maps_STL.txt", ios::in);

    if (!inputFile.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    int numOfQueries = 0, i = 0;
    cin >> numOfQueries;
    //inputFile >> numOfQueries;

    multimap<string, int> m;
    for (int i = 0; i < numOfQueries; i++) {
        int type;
        cin >> type;
        //inputFile >> type;

        string studentName;
        int studentScore;

        switch (type) {
            case 1:
                cin >> studentName >> studentScore;
                //inputFile >> studentName >> studentScore;
                m.insert(make_pair(studentName, studentScore));
                break;
            case 2:
                cin >> studentName;
                //inputFile >> studentName;
                m.erase(studentName);
                break;
            case 3:
                cin >> studentName;
                //inputFile >> studentName;
                pair<multimap<string, int>::iterator, multimap<string, int>::iterator> it = m.equal_range(studentName);
                int sum = accumulate(it.first, it.second, 0, 
                    [](int total, const std::pair<string, int>& p) {
                        return total + p.second;
                    });
                cout << sum << endl;   
        }
    }
}

void SubGrid() {
/*

rowDim = 3
colDim = 3

----------BoxSize = 1-------------- 9 - 1 boxes
rowPos = 0 or 1 or 2
colPos = 0 or 1 or 2
0,0     0,1     0,2
1,0     1,1     1,2
2,0     2,1     2,2

-----------BoxSize = 2------------- 4 - 4 boxes
rowPos = 0 or 1     rowPos = 0 or 1
colPos = 0 or 1     colPos = 1 or 2
0,0 0,1             0,1 0,2
1,0 1,1             1,1 1,2

rowPos = 1 or 2     rowPos = 1 or 2
colPos = 0 or 1     colPos = 1 or 2
1,0 1,1             1,1 1,2
2,0 2,1             2,1 2,2

-----------BoxSize = 3------------- 1 - 9 box
rowPos = 1 or 2     rowPos = 1 or 2
colPos = 0 or 1     colPos = 1 or 2
0,0 0,1 0,2
1,0 1,1 1,2
2,0 2,1 2,2

*/
    ifstream inputFile;
    inputFile.open("vector.txt");

    if (!inputFile.is_open()) {
        cout << "File failed to open" << endl;
        return;
    }

    int rowPos, rowDim, colPos, colDim, maxDim;
    maxDim = min(rowDim, colDim);
    
    inputFile >> rowDim >> colDim;

    vector<vector<int>> v;

    for (rowPos = 0; rowPos < rowDim; rowPos++) {
        v.push_back(vector<int>());
        for (int col = 0; col < colDim; col++) {
            int val;
            inputFile >> val;
            v[rowPos].push_back(val);
        }
    }

    int boxSize = 1;

    while (boxSize < maxDim){
        int boxSum = 0;
        for (rowPos = 0; rowPos < rowDim; rowPos++) {
            for (colPos = 0; colPos < colDim; colPos++) {
               
            }
        }
    }
}
