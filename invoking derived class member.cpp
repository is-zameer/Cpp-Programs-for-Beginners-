#include<iostream>
using namespace std;
class Base  {
public:
    virtual void show() {
        cout << "Base Class Function";
    }
};
class Derived : public Base {
public:
    void show() override    {
        cout << "Derived Class Function";
    }
};
int main()  {
    Derived d;
    Base *ptr = &d;
    ptr -> show();
    return 0;
}