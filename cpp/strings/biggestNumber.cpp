#include<bits/stdc++.h>
using namespace std;

int main()  {
    string str;
    cout<<"Enter the number : ";
    cin>>str;

    sort(str.begin() , str.end() , greater<int>()); //greater<int>() sorts in decreasing order.
    cout<<str<<endl;
}