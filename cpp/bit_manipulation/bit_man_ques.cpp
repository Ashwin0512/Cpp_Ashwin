#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n)   {         // (n & n-1) and n have same binary representation except the rightmost setbit. 
    return((n&(n-1)) == 0)  ;      
}

int ones_count (int n)  {
    int count=0;
    while(n != 0)   {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()  {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<isPowerof2(n)<<endl;
    cout<<ones_count(5)<<endl;
}