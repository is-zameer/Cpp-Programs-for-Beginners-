#include <iostream>
using namespace std;
class Student {
    int rollNo;
public:
    Student() {
        rollNo = 0;
        cout << "Default Constructor" << endl;
    }
    Student(int r)  {
        rollNo = r;
        cout << "Parameterized Constructor" << endl;
    }
    Student(const Student &s)   {
        rollNo = s.rollNo;
        cout << "Copy Constructor" << endl;
    }
    void display()  {
        cout << "Roll No.: " << rollNo << endl;
    }
};
int main()  {
    Student s1;
    s1.display();
    Student s2(30);
    s2.display();
    Student s3(s2);
    s3.display();
    return 0;
}