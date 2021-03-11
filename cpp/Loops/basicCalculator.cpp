#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter number 1 : ";
    int n1;
    cin>>n1;

    cout<<"Enter number 2 : ";
    int n2;
    cin>>n2;

    cout<<"Enter the operator : ";
    char op;
    cin>>op;

    switch (op) {

    case '+':
        cout<<n1+n2;
        break;
    
    case '-':
        cout<<n1-n2;
        break;

    case '*':
        cout<<n1*n2;
        break;

    case '/':
        cout<<n1/n2;
        break;

    default:
        cout<<"ERROR : INVALID OPERATION";
        break;
    }
}