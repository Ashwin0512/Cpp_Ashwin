#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    bool check_1 = false;
    if((n & (n-1)) == 0) check_1 = true;
    cout<<"check 1"<<check_1<<endl;
    
    bool check_2 = false;
    int num = n/2;
    if((num & (num-1)) == 0) check_2 = true;
    cout<<"check 2 "<<check_2<<endl;
    
    if(check_1==true && check_2==false) {
        return true;
    }   else    {
        return false;
    }
}

int main()  {
    int n;
    cin>>n;
    cout<<isPowerOfFour(n)<<endl;
}
