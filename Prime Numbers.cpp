#include <iostream>
using namespace std;
int main()  {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout << "Prime Numbers between 1 and "<<n<<"are: ";
    for(int num=2; num<=n; num++) {
        bool isprime = true;
        for(int i=2; i*i<+num; i++) {
            if(num%i==0)    {
                isprime=false;
                break;
            }
        }
        if(isprime)
            cout<<num<<" ";
    }
    return 0;
}