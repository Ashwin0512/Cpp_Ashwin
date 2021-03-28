#include<iostream>
#include<climits>
using namespace std;

int firstRepeat(int arr[], int n)   {
    const int N = 10e7+5;

    int idx[N];
    for(int i=0; i<N; i++)  {
        idx[i]=-1;
    }
    
    int minidx = INT_MAX;

    for(int i=0; i<n; i++)  {

        if(idx[arr[i] != -1])   {
            minidx = min(minidx , idx[arr[i]]);
        }   else    {
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX)   {
        return -1;
    }   else    {
        return minidx+1;
    }
    
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int j=0; j<n; j++)  {
        cin>>arr[j];
    }
    
    firstRepeat(arr,n);
}