#ifndef CLASS2_HPP
#define CLASS2_HPP

// Your class definitions and declarations go here


class MyClass2 {
private:
    int attribute12;
    double attribute22;

public:
    MyClass2(int a1, double a2);

    int getAttribute12() const;
    void setAttribute12(int a1);

    double getAttribute22() const;
    void setAttribute22(double a2);
};

#endif // CLASS2_HPP