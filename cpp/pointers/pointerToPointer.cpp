#include<iostream>
using namespace std;

int main()  {
    int a=10;
    int *p = &a;
    
    cout<<p<<"\n";  //prints address of a stored in p
    cout<<*p<<"\n"; //DEREFRENCING --> prints a

    int **q=&p;     //pointer q stores address of p

    cout<<q<<endl;  //prints address of p stored in q
    cout<<*q<<endl; //prints address of a stored in p
    cout<<**q<<endl;//prints value of a(tiwce derefrenced)
}