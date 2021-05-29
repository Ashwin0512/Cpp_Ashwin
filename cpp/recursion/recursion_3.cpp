#include<iostream>
using namespace std;

void reverse(string s)  {
    if(s.length() == 0)   return;
    
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

void replacePi(string s)    {
    if(s.find("pi") > s.length())   {
        cout<<s<<endl;
        return;
    }
    
    int idx = s.find("pi");
    s.erase(idx,2);
    string new_s = s.insert(idx,"3.14");
    replacePi(new_s);
}

void replacePi_2(string s) {
    if(s.size() == 0)   return;
    
    if(s[0] == 'p' && s[1] == 'i')  {
        cout<<"3.14";
        replacePi_2(s.substr(2));
    }   else    {
        cout<<s[0];
        replacePi_2(s.substr(1));
    }
}

int main()  {
    reverse("ashwin");
    cout<<"\n";
    replacePi("pippxxppiixipi");
    replacePi_2("pippxxppiixipi");
}