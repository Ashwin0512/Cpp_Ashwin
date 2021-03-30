#include<iostream>
#include<climits>
using namespace std;

void missingNumber(int arr[] , int n)    {
    
    int N = INT_MIN;
    for(int i=0; i<n; i++)  {
        N = max(N,arr[i]);
    }
    
    bool idx[N];
    for(int i=0; i<N; i++)  {
        idx[i] = false;
    }

    for(int i=0; i<n; i++)  {
        if(arr[i] >= 0) {
            idx[arr[i]] = true;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if(idx[i] == false) {
            cout<<"Missing positive number is : "<<i<<endl;
            break;
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

    missingNumber(arr,n);
}