#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0 ; i<n ; i++)    {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main()  {
    cout<<"Provide number of entries in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }
    
    cout<<"Enter the number you want to search in the array : ";
    int key;
    cin>>key;

    cout<<linearSearch(arr, n, key);
}