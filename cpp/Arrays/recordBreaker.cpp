#include<iostream>
#include<climits>
using namespace std;

int recordBreak(int array[] , int n)    {
        
    int days=0;
    int mx = INT_MIN;

    for(int i=0; i<n-1; i++)    {
        if(array[i] > mx && array[i] > array[i+1])  {
            days++;
        }
        mx = max(mx,array[i]);
    }

    if(array[n-1] > mx) days++;

    return days;
}

int main()  {
//    cout<<"Number of testcases : ";
    int N;
    cin>>N;
    
    for(int i=0 ; i<N ; i++)    {
//        cout<<"Enter number of elements in array : ";
        int n;
        cin>>n;

        int arr[n];

        for(int j=0; j<n; j++)  {
            cin>>arr[j];
        }

        cout<<"Case #"<<i+1<<": "<<recordBreak(arr,n);
    }
}