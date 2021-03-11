#include<iostream>
using namespace std;

int firstRepeating(int array[], int n)  {
    int i;
    for(i=0; i<n; i++)  {
        for(int j=i+1 ; j<n ; j++)    {
            if(array[i]==array[j])  {
                return i+1;
                break;
            }
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

    cout<<firstRepeating(array,n);
}