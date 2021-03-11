#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter the amount you have : ";
    
    int amount;
    cin>>amount;

    if(amount>5000) {
        cout<<"Neha \n";
    }   else if(amount>2000)    {
        cout<<"Rashmi \n";
    }   else    {
        cout<<"Friends";
    }

    return 0;
}