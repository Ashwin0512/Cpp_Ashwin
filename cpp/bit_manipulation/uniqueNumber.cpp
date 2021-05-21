#include<iostream>
using namespace std; 

int uniqueNumber(int arr[] , int n) {
    int test = 0; 

    for(int i=0; i<n; i++)  {
        if((test & (1<<i)) != 0)   {
            test = (~(1<<i) & test);
        }   else    {
            test = (test | (1<<i));
        }
    }
    return test; 
}

int main()  {
    int arr[] = {2,4,6,3,4,6,2};
    cout<<uniqueNumber(arr , 7);
}