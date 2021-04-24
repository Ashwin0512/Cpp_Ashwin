#include<bits/stdc++.h>
using namespace std;

int main()  {
    string str;
    cin>>str;
    cout<<"To convert into lower case, enter 1\nTo convert into upper case, enter 2 : ";
    int input;
    cin>>input;

    if(input == 1)  {
        for(int i=0 ; i<str.length(); i++)  {
            if(str[i]>='A' && str[i]<='Z')  {
                str[i] += 32;
            }
        }
    }   else if(input ==2)  {
        for(int i=0; i<str.length() ; i++)  {
            if(str[i]>'a' && str[i]<'z')    {
                str[i] -= 32;
            }
        }
    }   else    {
        cout<<"INVALID INPUT";
    }

    cout<<str<<endl;
}