#include<iostream>
using namespace std; 

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)  {
        for(int j=i ; j<n ; j++)    {
            for(int k=i ; k<j+1 ; k++)    {
                cout<<arr[k]<<" ";
            }   
            cout<<endl;    
        }
    }
}