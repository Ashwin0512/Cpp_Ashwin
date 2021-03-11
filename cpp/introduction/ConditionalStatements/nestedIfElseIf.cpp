#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter the amount you have : ";

    int amount;
    cin>>amount;

    if(amount>5000) {
        if(amount>10,000)   {
            cout<<"Roadtrip with Neha \n";
        }   else    {
            cout<<"Shopping with Neha \n";
        }
    }   else if(amount>2000)    {
        cout<<"Date with Rashmi \n";
    }   else    {
        cout<<"Chill with friends"<<endl;
    }
}