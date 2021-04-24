#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n)   {
    if((n&(n-1)) == 0)  {
        return true;
    }   else    {
        return false;
    }
}

int main()  {
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<isPowerof2(n)<<endl;
}