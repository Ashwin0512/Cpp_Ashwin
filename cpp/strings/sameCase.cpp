#include<bits/stdc++.h>
using namespace std;

int main()  {
    string str;
    getline(cin, str);

    // CONVERT TO CAPITAL 

    for(int i=0; i<str.size(); i++)    {
        if(str[i] >= 'a' && str[i] <= 'z')  {
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    // CONVERT TO SMALL 

    for(int i=0; i<str.length(); i++)   {
        if(str[i] >= 'A' && str[i] <= 'Z')  {
            str[i] += 32;
        }
    }
    cout<<str<<endl;

    // There is an inbuilt function to do this as well.

    string s = "nsgkjrngkjscnASFbfsnj";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin() ,::tolower);
    cout<<s<<endl;
}