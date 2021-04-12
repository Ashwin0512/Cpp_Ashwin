#include<iostream>
using namespace std;

int main()  {
    int arr[] = {10,20,30,40,50};
    cout<<*arr<<endl;

    cout<<"\n";

    int *ptr = arr;
    for(int i=0; i<5; i++)  {
        cout<<*ptr<<endl;
        ptr++;
    }

    cout<<"\n";

    for(int i=0 ; i<5 ; i++)    {
        cout<<*(arr + i)<<endl;     //arr is an indexing pointer, therefore on adding 1 it moves to next index, not next memory location.
    }
}