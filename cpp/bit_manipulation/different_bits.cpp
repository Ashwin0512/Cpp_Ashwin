#include<iostream>
using namespace std;

int different_bits(int n1,int n2)   {
    int n3 = n1 ^ n2;
    int count=0;
    while(n3 != 0)  {
        n3 = (n3 & (n3-1));
        count++;
    }
    return count;
}

int non_repeating_one(int arr[] , int n)    {
    int res=0;
    for(int i=0; i<n; i++)  {
        res = res ^ arr[i];
    }
    return res;
}

void non_repeating_2(int arr[] , int n) {
    int temp=0;
    for(int i=0;i<n;i++)    {
        temp = temp ^ arr[i];
    }
    int temp_2 = temp;

    int setbit = 0; 
    int pos = 0; 

    while(setbit != 0)  {
        setbit = temp & 1;
        pos++;
        temp = temp >> 1;
    }
}

int main()  {
    cout<<different_bits(8,18)<<endl; 
    int arr[] = {5,4,3,4,1,3,5}; 
    cout<<non_repeating_one(arr,7);
}