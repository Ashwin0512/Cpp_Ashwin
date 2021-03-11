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

void print(int n)   {
    for(int i=0 ; i<n ; i++)    {
        for(int j=0 ; j<i+1 ; j++)  {
            cout<<nCr(i,j)<<"  ";
        }
        cout<<endl;
    }
    return;
}

int main()  {
    print(10);
}