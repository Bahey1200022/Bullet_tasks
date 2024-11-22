#include "class1.hpp"


MyClass::MyClass(int a1, double a2) : attribute1(a1), attribute2(a2) {}

int MyClass::getAttribute1() const {
    return attribute1;
}

void MyClass::setAttribute1(int a1) {
    attribute1 = a1;
}

double MyClass::getAttribute2() const {
    return attribute2;
}

void MyClass::setAttribute2(double a2) {
    attribute2 = a2;
}