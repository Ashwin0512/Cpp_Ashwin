#include<iostream>
using namespace std;

typedef union currency  {   // Different data types can be present in a union, although I am using only one.
    float dollar;  
    float rupee;    // Union uses shared memory. Here only 4 bytes would be alloted to the union
    float dinar;    // but had it been struct, memory allocated would be 12 bytes. 
}cur;

int main()  {
    cur c1;
    c1.rupee = 100;
    c1.dollar = 2.3;    // If I specify c1 again using different parameter of the struct, it would
                        // be overwritten. Therefore specify c1 only once.

    cout<<"The value of c1.rupee is : "<<c1.rupee;

    return 0;
}