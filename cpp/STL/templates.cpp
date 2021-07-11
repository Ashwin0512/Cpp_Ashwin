#include<iostream>
using namespace std;

/* Creating a generic funtion to swap numbers(here one function is created to swap 
2 integers and also 2 floats) */

template <class X>      /* Here X is just a placeholder used to store the datatype when this function is used */
void swap_1(X &a , X &b)  {
    X tp;
    tp = a;
    a = b;
    b = tp;

    cout<<"Swapped elements values of a and b are : "<<a<<" and "<<b<<" respectively.\n";
}

int main()  {
    int a=10 , b=20;
    float c=3.14 , d=6.28;

    swap_1(a,b);
    swap_1(c,d);
}