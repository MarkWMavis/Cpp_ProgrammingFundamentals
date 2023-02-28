#include "Classes.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;


void Student::input() {
    int temp;
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        scores.push_back(temp);
    }

}
int Student::calculateTotalScore() {
    int sum = 0;
    for (int x : scores) {
        sum += x;
    }
    return sum;
};

Box::Box(){
    this->l = 0;
    this->b = 0;
    this->h = 0;
};
Box::Box(int l, int b, int h) {
    this->l = l;
    this->b = b;
    this->h = h;
};
Box::Box(Box& obj) {
    l = obj.l;
    b = obj.b;
    h = obj.h;
};
int Box::getLength() {
    return l;
}
int Box::getBreadth() {
    return b;
}
int Box::getHeight() {
    return h;
}

long long Box::CalculateVolume() {
    return ((long long)l * b * h);
}
bool Box::operator<(Box& b) {
    return this->l < b.l || (this->b < b.b&& this->l == b.l) || (this->h < b.h&& this->b == b.b && this->l == b.l);
};

std::ostream& operator<<(std::ostream& output, const Box& d){
    if (typeid(d) == typeid(Box)) {
        output << d.l << " " << d.b << " " << d.l;
    }
    return output;
}

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
    cout << count;
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









void InheritedCode() {
    int n, i;
    string name;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> name;
        if (name.length() < 3) {
            cout << "Too Short: " << name.length() << endl;
        }
        else {
            for (char x : name) {
                if (typeid(x) == typeid(char)) {
                    continue;
                }
                else {
                    cout << "Invalid" << endl;
                    break;
                }
            }
            cout << "Valid" << endl;
        }
    }
}