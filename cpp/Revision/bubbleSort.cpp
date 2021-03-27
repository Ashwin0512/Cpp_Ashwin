#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)   {
    for(int i=0; i<n-1 ; i++)  {
        for(int j=0 ; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";
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

    bubbleSort(arr,n);
}