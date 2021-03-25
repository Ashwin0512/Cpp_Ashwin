#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)  {
    for(int i=0; i<n; i++)  {
        if(arr[i]==key) {
            return i;
        }   
    }
    return -1;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number to be found in the array : ";
    cin>>key;

    cout<<"The index is : "<<linearSearch(arr,n,key);
}