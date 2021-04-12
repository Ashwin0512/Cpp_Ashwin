#include<iostream>
using namespace std;

void swap1(int a, int b)    {
    int temp=a;         //values passed as values, a local variable  
    a=b;                //is created and that is swapped, not the original var
    b=temp;
}

void swap2(int *a, int *b)  {
    int temp=*a;    //values passed as refrence(address is passed)
    *a=*b;
    *b=temp;
}

int main()  {
    int a=2;
    int b=3;

    swap1(a,b);     //Here actual variables aren't swapped
    cout<<a<<" "<<b<<"\n";

    swap2(&a,&b);   //address is passed, actual variables swapped
    cout<<a<<" "<<b<<"\n";  //address passed directly

    int *aptr = &a;
    int *bptr = &b;

    swap2(aptr,bptr);   //pointers created and address passes, actual variables swapped.
    cout<<a<<" "<<b<<"\n";
}