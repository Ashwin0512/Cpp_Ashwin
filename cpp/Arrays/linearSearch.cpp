#include<iostream>
using namespace std;

int linearSearch(int array[] , int n , int key)   {
   
    for(int i=0 ; i<n ; i++)    {
        if(array[i] == key) {
            return i;
        }
        i++;
    }
    return -1;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    cout<<"Enter number to be searched in the array : ";
    int key;
    cin>>key;

    cout<<"Element is present at "<<linearSearch(array,n,key)<<" index"<<endl;
}