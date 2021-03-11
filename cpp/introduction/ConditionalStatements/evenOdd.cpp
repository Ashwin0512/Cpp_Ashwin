#include<iostream>
using namespace std;

int main()  {

    cout<<"Enter a number : ";
   
    int num;
    cin>>num;

    if(num%2 == 0)  {
        cout<<"Even Number";
    }   else    {
        cout<<"Odd Number";
    }

    return 0;
}