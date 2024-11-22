#ifndef CLASS1_HPP
#define CLASS1_HPP
#include "class2.hpp"
class MyClass {
private:
    int attribute1;
    double attribute2;

public:
    MyClass(int a1, double a2);

    int getAttribute1() const;
    void setAttribute1(int a1);

    double getAttribute2() const;
    void setAttribute2(double a2);
};


#endif // CLASS1_HPP