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

#include <fstream>
using std::ifstream;
using std::ios; // Input file stream mode flag. One of several flags
                // Specifies that the file should be opened in input mode.
                // This means is can be read from but not written to.

#include <numeric>
using std::accumulate;

#include <sstream>
using std::stringstream;

#include <algorithm>
using std::sort;

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

void Challenge1() {
    ifstream inputFile;
    inputFile.open("Challenge1.txt", ios::in);

    if (!inputFile.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }

    int n, m, i, j;

    inputFile >> n >> m;
    vector<vector<int>> v;
    int temp;

    for (i = 0; i < n; i++) {
        v.push_back(vector<int>());
        for (j = 0; j < m; j++) {
            inputFile >> temp;
            v[i].push_back(temp);
        }
    }

}

void Challenge2() {
    ifstream inputFile;
    inputFile.open("Challenge2.txt", ios::in);

    if (!inputFile.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }


}

void Challenge3() {
    ifstream inputFile;
    inputFile.open("Challenge3.txt", ios::in);

    if (!inputFile.is_open()) {
        cout << "Error opening file!" << endl;
        return;
    }
}