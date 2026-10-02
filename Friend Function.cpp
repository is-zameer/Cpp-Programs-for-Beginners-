#include <iostream>
using namespace std;
class Demo {
    int value;
public:
    Demo()  {
        value = 100;
    }
    friend void show(Demo);
};
void show(Demo d)   {
    cout << "Value = "<< d.value << endl;
}
class A {
    int x = 50;
    friend class B;
};
class B {
public:
    void display(A obj) {
        cout << "Fried class value = "<< obj.x << endl;
    }
};
int main()  {
    Demo d;
    show(d);
    A a;
    B b;
    b.display(a);
    return 0;
}