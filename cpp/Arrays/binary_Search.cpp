#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key)  {
    int s=0;
    int e=n;

    while(s<=e) {
        int mid = (s+e)/2;

        if(array[mid]==key) {
            return mid;
        }   else if(array[mid] < key)   {
            s = mid + 1;
        }   else    {
            e = mid - 1;
        }
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

    cout<<"Element is present at "<<binarySearch(array,n,key)<<" index"<<endl;
}