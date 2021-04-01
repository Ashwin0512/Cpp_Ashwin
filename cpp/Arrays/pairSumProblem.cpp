#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k)   {
    bool num1=false;
    bool num2=false;

    for(int i=0; i<n-1; i++)    {
        for(int j=i+1; j<n; j++)    {
            if((arr[i] + arr[j]) == k) {
                if(num1 == true)    {
                    num2 = true;
                }   else    {
                    num1 = true;
                }
            }   
        }
    }

    if(num1==true && num2==true)    {
        cout<<"YES";
        return true;
    }   else    {
        cout<<"NO";
        return false;
    }
}

int main()  {
    cout<<"Enter value of number of elements in array : ";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++)    {
        cin>>arr[i];
    }

    cout<<"Enter value of sum : ";
    int k; 
    cin>>k;

    pairSum(arr,n,k);
}