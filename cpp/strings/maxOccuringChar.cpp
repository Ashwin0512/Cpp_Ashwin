#include<bits/stdc++.h>
using namespace std;

int main()  {
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);

    sort(str.begin(), str.end());

    char current=str[0];
    int count=1; 
    int mx=0;

    for(int i=1; i<str.length(); i++)   {
        if(current == str[i])   {
            count++;
        }   else    {
            current = str[i];
            count = 1;
        }
        mx = max(count,mx);
    }
    cout<<mx<<endl;
}