#include <iostream>
using namespace std;
class A {
public:
    A() {
        cout << "Consturctor of A\n";
    }
    ~A() {
        cout << "Destructor of A\n";
    }
};
class B {
public:
    B() {
        cout << "Constructor of B\n";
    }
    ~B()    {
        cout << "Destructor of B\n";
    }
};
class C : public A, public B    {
public:
    C() {
        cout << "Constructor of C\n";
    }
    ~C()    {
        cout << "Destructor of C\n";
    }
};
int main()  {
    C obj;
    return 0;
}