#include<iostream>
using namespace std;

void subarray(int array[] , int n, int s)  {
    int i, j=i;
    for(i=0; i<n; i++)  {
        int sum=0, start=-1, end=-1;
        while((sum<s) && (j<n))    {
            sum += array[j];
            j++;

            if(sum == s)   {
                start=i;
                end=j;
                break;
            }
        }
    }

    int b=j-i+1;
    int arr[b];
    for(int k=0 ; k<b ; k++)    {
        arr[k]=array[i+k];
    }

    for(int k=0 ; k<b ; k++)    {
        cout<<arr[k]<<" ";
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

    cout<<"Enter required sum : ";
    int s;
    cin>>s;

    subarray(array,n,s);
}