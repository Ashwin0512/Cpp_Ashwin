#include<iostream>
using namespace std;

typedef struct employee {       // Struct can also be placed inside the main function. But then the
    int eID;                    // scope of the struct employee would be main itself.
    string position;
    int age;
    float salary; 
}ep ;

int main()  {
    struct employee ashwin;
    ashwin.eID = 1701;
    ashwin.position = "CEO";
    ashwin.age = 34;
    ashwin.salary = 10e7; 

    ep nehal;
    nehal.eID = 1551;
    nehal.position = "CXO";
    nehal.age = 33;
    nehal.salary = 1.5e8; 

    cout<<"The value of ashwin.eID is : "<<ashwin.eID<<endl   ;
    cout<<"The value of ashwin.position is : "<<ashwin.position<<endl   ;
    cout<<"The value of ashwin.age is : "<<ashwin.age<<endl   ;
    cout<<"The value of ashwin.salary is : "<<ashwin.salary<<endl   ;

    putchar('\n');

    cout<<"The value of nehal.eID is : "<<nehal.eID<<endl   ;
    cout<<"The value of nehal.position is : "<<nehal.position<<endl   ;
    cout<<"The value of nehal.age is : "<<nehal.age<<endl   ;
    cout<<"The value of nehal.salary is : "<<nehal.salary<<endl   ;
    return 0;
}