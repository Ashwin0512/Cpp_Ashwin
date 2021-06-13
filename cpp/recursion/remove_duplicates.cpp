#include<bits/stdc++.h>
using namespace std;

string removeDup(string s)  {
    if(s.length() == 0) return "";

    char c = s[0];
    string ans = removeDup(s.substr(1));

    if(ans[0] == c) {
        return ans;
    } else return (c + ans);
}

int main()  {
    cout<<removeDup("aaaassshwiiiinnn");
}