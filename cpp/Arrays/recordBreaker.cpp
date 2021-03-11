#include<iostream>
#include<climits>
using namespace std;

int recordBreak(int array[], int n)   {
    int count=0;
    int current=array[0];
    
    if(n==1)    count=1;

    if(array[0]>array[1])   {
        count++;
    }

    for(int i=1 ; i<n ; i++)  {
        int max=INT_MIN;
        for(int j=0; j<i; j++)  {
            if(array[j]>max)    max=array[j];
        }
        
        if(i==n-1)  {
            if(array[n-1]>max)  count++;
        }   else    {
            if((array[i]>max) && array[i]>array[i+1])   count++;
        }
    }

    cout<<count;
    return count;
}

int  main() {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    recordBreak(array,n);
}