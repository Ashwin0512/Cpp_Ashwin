#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter n : ";
    int n;
    cin>>n;

    switch (n) {

    case 1:
        cout<<"Hello";
        break;
    
    case 2:
        cout<<"Namste";
        break;

    case 3:
        cout<<"Ciao";
        break;

    case 4:
        cout<<"Hemlo";
        break;

    default:
        cout<<"I don't know what to say";
        break;
    }

    return 0;
}