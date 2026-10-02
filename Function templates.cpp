#include <iostream>
using namespace std;
template <class T>
T largest(T a[], int n) {
    T max = a[0];
    for(int i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}
template <class T>
T smallest(T a[], int n)    {
    T min = a[0];
    for(int i=1; i<n; i++)
        if(a[i] < min)
            min = a[i];
    return min;
}
template <class T>
void sortArray(T a[], int n)    {
    T temp;
    for(int i=0; i < n-1; i++)
        for(int j=0; j < n-i-1; j++)
            if(a[j] > a[j+1])   {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}
template <class T>
void display(T a[], int n)  {
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
}
int main()  {
    int a[] = {40, 10, 70, 20, 50};
    int n=5;
    cout << "Original list: ";
    display(a, n);
    cout << "\nLargest = " << largest(a, n);
    cout << "\nSmallest = " << smallest(a, n);
    sortArray(a, n);
    cout << "\nSorted list: ";
    display(a,n);
    return 0;
}