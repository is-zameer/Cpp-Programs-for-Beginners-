#include <iostream>
using namespace std;
//Single inheritance
class Parent {
public:
    void showParent() {
        cout << "Parent Class\n";
    }
};
class Child : public Parent {
public:
    void showChild()    {
        cout << "Child Class\n";
    }
};
//Multiple inheritance
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};
class B {
public: 
    void showB()    {
        cout << "Class B\n";
    }
};
class C : public A, public B {};
//Multilevel inheritance
class X  {
public:
    void showX()    {
        cout << "Class X\n";
    }
};
class Y : public X {
public:
    void showY()    {
        cout << "Class Y\n";
    }
};
class Z : public Y {
public:
    void showZ()    {
        cout << "Class Z\n";
    }
};
//Hiearchical inheritance
class Base {
public:
    void showBase() {
        cout << "Base Class\n";
    }
};
class D1 : public Base {};
class D2 : public Base {};

int main()  {
    Child s;
    s.showParent();
    s.showChild();
    C m;
    m.showA();
    m.showB();
    Z ml;
    ml.showX();
    ml.showY();
    ml.showZ();
    D1 h1;
    D2 h2;
    h1.showBase();
    h2.showBase();
    return 0;
}