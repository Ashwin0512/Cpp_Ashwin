#include<bits/stdc++.h>
using namespace std;

int number_of_ones(int n)    {
    int count = 0;
    while(n != 0)   {
        n = n & (n-1);
        count++;
    }
    return count;
}

void subset(int arr[] , int n)  {
    for(int i=0 ; i< (1<<n) ; i++)  {
        for(int j=0 ; j<n ; j++)    {
            if(i & (1<<j))  {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}

int main()  {
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int arr[] = {1,2,3};

    cout<<number_of_ones(n);
    subset(arr , 3);
}