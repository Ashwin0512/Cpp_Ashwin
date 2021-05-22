#include<bits/stdc++.h>
using namespace std;

int main()  {
    cout<<"Enter the string : ";
    string s;
    getline(cin,s);

    char ans[s.length()];

    ans[0] = s[0];
    int curr=1;
    for(int i=1 ; i<s.length() ; i++)   {
        if(s[i] != s[i-1])  {
            ans[curr] = s[i];
            curr++;
        }
    }

    cout<<ans;
}