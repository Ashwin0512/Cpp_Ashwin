#include<bits/stdc++.h>
using namespace std;

int main()  {
    int a=10;   //stored in stack
    
    int *p = new int(); //allocate memory in heap
    *p = 10;

    delete(p);  // deallocate memory from heap, but the pointer reamins
                // in stack (DANGLING POINTER), can be used to allocate something in heap

    p = new int[4]; //allocates an array in heap 

    delete[]p;
    p = NULL;   // deletes the pointer p 
}