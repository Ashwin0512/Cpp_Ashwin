#include<iostream>
using namespace std;

int sumOfSubarray(int array[] , int n)    {
    
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];
                                                                                                                                                                                                                                                                                                                                                                                                                                  
    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    cout<<"Sum of all subarrays is : "<<sumOfSubarray(array,n);
}