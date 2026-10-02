#include <iostream>
using namespace std;
class Fibonacci {
    int n, a, b;
public:
    Fibonacci(int terms)    {
        n=terms;
        a=0;
        b=1;
    }
    void generate() {
        int c;
        cout << "Fibonacci Series: ";
        for(int i=1; i<=n; i++) {
            cout << a << " ";
            c=a+b;
            a=b;
            b=c;
        }
    }
};
int main()  {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    Fibonacci f(n);
    f.generate();
    return 0;
}