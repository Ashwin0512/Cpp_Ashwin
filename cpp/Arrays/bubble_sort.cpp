#include<iostream>
using namespace std;

void bubbleSort(int array[] , int n)    {
    
    int i=0;
    while(i<n-1)    {
        for(int i=0; i<n-1; i++)    {
            if(array[i]>array[i+1]) {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        i++;
    }

    for(int i=0 ; i<n ; i++)    {
        cout<<array[i]<<" ";
    }
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    bubbleSort(array,n);
}