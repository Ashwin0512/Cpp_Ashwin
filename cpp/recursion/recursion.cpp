#include<bits/stdc++.h>
using namespace std; 

int sum(int n)  {

    if(n == 0)  return 0;

    int prevSum = sum(n-1);
    return prevSum + n;
}

int power(int n , int p)    {

    if(p == 0)  return 1;

    int prevProduct = power(n, p-1);
    return prevProduct * n;
}

int factorial(int n)    {
    if(n == 0)  return 1;
    return factorial(n-1) * n;
}

int fibonacci(int n)    {
    if(n == 1) return 0;
    if(n == 2) return 1; 

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()  {
    cout<<sum(10)<<endl;
    cout<<power(2,5)<<endl;
    cout<<factorial(5)<<endl;
    cout<<fibonacci(8)<<endl;
}