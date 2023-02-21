#include "Classes.hpp"
#include <iostream>


void Student::input() {
    int temp;
    for (int i = 0; i < 5; i++) {
        std::cin >> temp;
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
