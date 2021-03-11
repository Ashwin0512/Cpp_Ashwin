#include<iostream>
using namespace std;

int factorial(int n)    {
    int temp=n;
    int product=1;
    
    while(temp>1)   {
        product *= temp;
        temp -= 1;
    }
    return product;
}

int main()  {
    cout<<"Enter a number \n";
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}