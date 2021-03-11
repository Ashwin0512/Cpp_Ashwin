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

int nCr(int n, int r)   {
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()  {
    cout<<"Enter value of n : ";
    int n;
    cin>>n;

    cout<<"Enter the value of r : ";
    int r;
    cin>>r;

    cout<<"Value of binomial coefficient is : "<<nCr(n,r);
}