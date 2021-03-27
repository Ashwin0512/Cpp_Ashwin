#include<iostream>
using namespace std;

int longestSubarray(int array[] , int n)    {
    int length=2;
    int curLength = 2;
    int dif=array[2]-array[1];

    for(int i=0; i<n-1; i++)    {
        if(array[i+1] - array[i] == dif)    {
            length++;
            if(length>curLength)    {
            curLength = length;
            }
        }   else    {
            dif = array[i+1]-array[i];
            length=2;
        }        
    }
    return curLength;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    cout<<"Length of longest subarray is : "<<longestSubarray(array,n);
}