#include "Controller.hpp"
#include "Classes.hpp"

#include <sstream>
using std::stringstream;

#include <algorithm>
using std::sort;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void ClassesAndObjects() {
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    std::cout << count;
}

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

void BoxIt() {
    Box b1;
    Box b2(2, 3, 4);
    b2.getLength();
    b2.getBreadth();
    b2.getHeight();
    bool x = (b1 < b2);
    cout << b2;

    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
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
    v.erase(v.begin()+(idxMin-1));

    cin >> idxMin >> idxMax;
    v.erase(v.begin()+(idxMin-1), v.begin()+(idxMax-1));

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
            cout << "YES " << (it - v.begin())+1 << endl;
        }
        else {
            cout << "NO " << (it - v.begin()) + 1 << endl;
        }
    }
}