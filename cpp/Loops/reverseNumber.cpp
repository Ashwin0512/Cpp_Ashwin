#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    cout<<"Enter a number : ";
    int n;
    cin>>n;

    int reverse=0;
    while(n>0)  {
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n/=10;
    }

    cout<<"Reverse number is : "<<reverse<<endl;
}
