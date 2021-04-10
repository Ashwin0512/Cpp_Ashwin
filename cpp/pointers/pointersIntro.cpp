#include<iostream>
using namespace std;

int main()  {
    int a = 10;
    int *aptr;
    aptr = &a;

    cout<< &a <<endl;       // Prints the address of variable a 
    cout<< aptr << endl;    // Prints aptr which stores address of a 
    cout<< *aptr << endl;   // Access the variable using pointer

    *aptr = 20;        // Modifying the variable using pointer.
    cout<<a<<endl;     // Modified value of variable a 

    aptr++;         //Increment to pointer, it would go to next memory
                    // location after 4 bytes as int occupies 4 bytes.
    cout<<aptr<<endl;
    cout<<endl;

    char ch = 'b';
    char *cptr = &ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
}