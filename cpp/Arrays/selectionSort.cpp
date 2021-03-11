#include<iostream>
#include<climits>
using namespace std;

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    for(int i=0 ; i<n-1 ; i++)    {
        for(int j=i+1 ; j<n ; j++)    {
            
            if(array[j] < array[i])   {
                int flag = array[j];
                array[j] = array[i];
                array[i] = flag;
            }
        }
    }

    for(int i=0 ; i<n ; i++)    {
        cout<<array[i]<<" ";
    }
}