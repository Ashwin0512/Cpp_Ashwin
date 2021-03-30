#include<iostream>
using namespace std;

void givenSum(int arr[] , int n , int s)    {
    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j<n)  {
        sum += arr[j];

        while(sum > s)  {
            sum -= arr[i];
            i++;
        }
        if(sum == s)    {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }    

    cout<<st<<" "<<en<<endl;
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