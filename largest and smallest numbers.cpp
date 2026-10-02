#include <iostream>
using namespace std;
int main()  {
    int n, num;
    int largest, smallest;
    cout<<"Enter the number of integers: ";
    cin>>n;
    cout << "Enter"<< n <<"integers: "<<endl;
    cin>>num;
    largest=smallest=num;
    for(int i=2; i<=n; i++) {
        cin>>num;
        if(num>largest)
            largest=num;
        if(num<smallest)
            smallest=num;
    }
    cout<<"Largest Number = "<<largest<<endl;
    cout<<"smallest Number = "<<smallest<<endl;
    return 0;
}