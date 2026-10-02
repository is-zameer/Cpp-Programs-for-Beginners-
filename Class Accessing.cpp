#include <iostream>
using namespace std;
class Student {
    private:
        int rollNo;
    public:
        string name;
        void setData(int r, string n)   {
            rollNo = r;
            name = n;
        }
        void display() {
            cout << "Roll No.: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }
};
int main()  {
    Student s;
    s.setData(30, "Zameer");
    s.display();
    return 0;
}