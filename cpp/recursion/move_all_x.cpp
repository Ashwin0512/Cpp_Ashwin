#include<bits/stdc++.h>
using namespace std;

string move_x (string s)    {
    if(s.length() == 0) return "";

    char c = s[0];
    string ans = move_x(s.substr(1));

    if(c == 'x') {
        return (ans + c) ;
    } else return (c + ans);
    
}

int main()  {
    cout<<move_x("axshxxwxixxxnxx");
}
