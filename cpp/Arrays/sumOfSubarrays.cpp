#include<iostream>
using namespace std;

int sumOfSubarray(int array[] , int n)    {
    int sum=0;
    for(int i=0; i<n; i++)  {
        for(int j=i ; j<n ; j++)    {
            sum += array[j]*(n-j);
        }
    }
    return sum;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    cout<<"Sum of all subarrays is : "<<sumOfSubarray(array,n);
}