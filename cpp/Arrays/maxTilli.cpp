#include<iostream>
#include<climits>
using namespace std;

void maxTilli(int array[], int n)   {
    
    int newArray[n];
    int mx=INT_MIN;

    for(int i=0; i<n ; i++) {
        mx = max(mx,array[i]);
        cout<<mx<<" ";
    }
}

int main()  {
    cout<<"Enter number of elements in the array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    maxTilli(array,n);
}