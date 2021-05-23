#include<bits/stdc++.h>
using namespace std;

int number_of_ones(int n)   {
    int count=0;
    while(n != 0)   {
        n = n & (n-1);
        count++;
    }
    return count;
} 

int main()  {
    int num;
    cout<<"Enter number of elements in array : ";
    cin>>num;

    int arr[num+1];

    for(int i=0 ; i<num+1 ; i++)    {
        arr[i] = number_of_ones(i);
    }

    for(int i=0 ; i<num+1 ; i++)    {
        cout<<arr[i]<<" ";
    }
}