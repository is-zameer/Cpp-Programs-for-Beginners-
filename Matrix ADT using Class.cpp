#include <iostream>
using namespace std;
class Matrix    {
    int a[10][10];
    int rows, cols;
public:
    void read() {
        cout << "Enter rows and colomns: ";
        cin >> rows >> cols;
        cout << "Enter elements: \n";
        for(int i=0; i < rows; i++)
            for(int j=0; j < cols; j++)
                cin >> a[i][j];
    }
    void display()   {
        for(int i=0; i < rows; i++) {
            for(int j=0; j < cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    Matrix add(Matrix b)    {
        Matrix c;
        c.rows = rows;
        c.cols = cols;
        for(int i=0; i < rows; i++)
            for(int j=0; j < cols; j++)
                c.a[i][j] = a[i][j] + b.a[i][j];
        return c;
    }
    Matrix subtract(Matrix b)  {
        Matrix c;
        c.rows = rows;
        c.cols = cols;
        for(int i=0; i < rows; i++)
            for(int j=0; j < cols; j++)
                c.a[i][j] = a[i][j] - b.a[i][j];
        return c;
    }
};
int main()  {
    Matrix A, B, C;
    cout << "Enter Matrix A\n";
    A.read();
    cout << "Enter Matrix B\n";
    B.read();
    cout << "\nMatrix A: \n";
    A.display();
    cout << "\nMatrix B: \n";
    B.display();
    C = A.add(B);
    cout << "\nAddition: \n";
    C.display();
    C = A.subtract(B);
    cout << "\nSubtraction: \n";
    C.display();
    return 0;
}