#include<iostream>
using namespace std;

void selectionSort(int array[] , int n) {
    for(int i=0 ; i<n ; i++)    {
        for(int j=i+1 ; j<n ; j++)  {
            if(array[j] < array[i]) {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
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

    selectionSort(array,n);
}