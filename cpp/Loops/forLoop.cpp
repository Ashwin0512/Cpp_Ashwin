#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter n : ";

    int n;
    cin>>n;
    int a;
    int sum=0;

    for(int i=0; i<n ; i++) {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>a;
        sum += a;
    }

    cout<<"Sum of all the numbers entered is : "<<sum;
    return 0;
}