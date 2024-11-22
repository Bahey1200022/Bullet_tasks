#include <iostream>
#include "class1.hpp"
#include "class2.hpp"

int main(){
    MyClass obj1(1, 2.5);
    MyClass2 obj2(3, 4.5);

    std::cout << "obj1: " << obj1.getAttribute1() << " " << obj1.getAttribute2() << std::endl;
    std::cout << "obj2: " << obj2.getAttribute12() << " " << obj2.getAttribute22() << std::endl;

    obj1.setAttribute1(10);
    obj1.setAttribute2(20.5);
    obj2.setAttribute12(30);
    obj2.setAttribute22(40.5);

    std::cout << "obj1: " << obj1.getAttribute1() << " " << obj1.getAttribute2() << std::endl;
    std::cout << "obj2: " << obj2.getAttribute12() << " " << obj2.getAttribute22() << std::endl;

    return 0;
}