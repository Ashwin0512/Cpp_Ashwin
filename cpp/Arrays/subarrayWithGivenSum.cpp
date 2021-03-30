#include<iostream>
using namespace std;
 
void givenSum(int arr[] , int n, int s)    {

    for(int i=0; i<n; i++)  {
        int sum = 0;
        for(int j=i ; j<n ; j++)    {
            sum += arr[j];

            if(sum == s)    {
                cout<< i+1 <<" "<< j+1 <<endl;
            }
        }
    }
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int s;
    cout<<"Enter the required sum of subarray : ";
    cin>>s;

    givenSum(arr,n,s);
}