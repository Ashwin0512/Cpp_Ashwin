#include<iostream>
#include<climits>
using namespace std;

int firstRepeating(int array[], int n)    {
    int N=10e6+2;

    int idx[N];
    for(int i=0; i<N; i++)  {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++)  {
        if(idx[array[i]] != -1) {
            minidx = min(minidx , idx[array[i]]);
        }   else    {
            idx[array[i]] = i;
        }
    }

    if(minidx = INT_MAX)    {
        return -1;
    }   else    {
        return minidx + 1;
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

    cout<<firstRepeating(array,n);
}