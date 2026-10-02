#include <iostream>
using namespace std;
class Student   {
public:
    int rollNo;
    string name;
    void display()  {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
int main()  {
    Student s;
    Student *ptr = &s;
    ptr -> rollNo = 30;
    ptr -> name = "Zameer";
    ptr -> display();
    return 0; 
}