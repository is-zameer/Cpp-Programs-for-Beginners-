#include<iostream>
using namespace std;
class Number    {
    int x;
public:
    Number(int a = 0)   {
        x=a;
    }
    Number operator + (Number obj)  {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }
    void display()  {
        cout << "operator result = " << x << endl;
    }
};
class Calculator   {
public:
    int add(int a, int b)  {
        return a+b;
    }
    int add(int a, int b, int c)    {
        return a+b+c;
    }
    double add(double a, double b)  {
        return a+b; 
    }
};
int main()  {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    n3.display();
    Calculator c;
    cout << "Two integers = " << c.add(10,20) << endl;
    cout << "Three integers = " << c.add(10,20,30) << endl;
    cout << "Two double = " << c.add(10.5, 20.5) << endl;
    return 0;
}