#include<iostream>
#include<climits>
using namespace std;

int kadaneAlgo(int arr[], int n)    {
    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)  {
        if(curSum + arr[i] >= 0) {
            curSum += arr[i];
        }   else if(curSum + arr[i]) {
            curSum = 0;
        }

        maxSum = max(maxSum , curSum);
    }
    return maxSum;
}

int main()  {
    cout<<"Enter value of number of elements in array : ";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++)    {
        cin>>arr[i];
    }

    cout<<kadaneAlgo(arr,n);
}