#include "class2.hpp"


MyClass2::MyClass2(int a1, double a2) : attribute12(a1), attribute22(a2) {}

int MyClass2::getAttribute12() const {
    return attribute12;
}

void MyClass2::setAttribute12(int a1) {
    attribute12 = a1;
}

double MyClass2::getAttribute22() const {
    return attribute22;
}

void MyClass2::setAttribute22(double a2) {
    attribute22 = a2;
}