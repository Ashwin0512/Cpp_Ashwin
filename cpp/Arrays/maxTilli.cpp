#include<iostream>
#include<climits>
using namespace std;

void maxTilli(int array[], int n)   {
    
    int newArray[n];
    int max = INT_MIN;

    for(int i=1; i<=n; i++)  {
        for(int j=0; j<i; j++)  {
            if (array[j]>max) 
                max=array[j];
        }
        newArray[i-1]=max;
    }

    for(int i=0; i<n; i++)  {
        cout<<newArray[i]<<" ";
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