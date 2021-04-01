#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n)    {
    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)  {
        if(curSum + arr[i] >= 0)    {
            curSum += arr[i];
        }   else    {
            curSum = 0;
        }

        maxSum = max(curSum , maxSum);
    }
    return maxSum;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int nonwrapSum = kadane(arr,n);

    int arraySum = 0;
    for(int i=0; i<n; i++)  {
        arraySum += arr[i];
        arr[i] = -arr[i];
    }

    int wrapSum = arraySum + kadane(arr,n);

    cout<<max(wrapSum,nonwrapSum)<<endl;
}