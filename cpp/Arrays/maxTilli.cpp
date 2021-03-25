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

    int mx = INT_MIN;
    for(int i=0 ; i<n ; i++)    {
        mx = max(mx,arr[i]);
        cout<< mx <<endl;
    }
}