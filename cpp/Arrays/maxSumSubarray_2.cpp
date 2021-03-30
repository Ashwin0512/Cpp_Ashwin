#include<iostream>
#include<climits>
using namespace std;

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int cumSum[n];
    int sum = 0;
    for(int i=0; i<n ; i++) {
        sum += arr[i];
        cumSum[i] = sum;
    }   

    int maxSum = INT_MIN;
    for(int i=0 ; i<n ; i++)    {
        for(int j=i ; j<n ; j++)  {
            int s = cumSum[j] - cumSum[i];
            maxSum = max(maxSum , s); 
        }
    }
    
    for(int i=0; i<n; i++)  {
        cout<<cumSum[i]<<" ";
    }
    cout<<maxSum;
}