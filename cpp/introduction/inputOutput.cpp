#include<iostream>
using namespace std;

int main()  {

    double amount1;
    double amount2;

    cout<<"Enter amount given by mother : \n";
    cin>>amount1;

    cout<<"Enter amount given by father : \n";
    cin>>amount2;

    int total = amount2 + amount1;
    cout<<"Total amount given is : ";
    cout<<total;

    return 0;
}
