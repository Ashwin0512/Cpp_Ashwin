#include<iostream>
#include<string>
using namespace std;

int main()  {
    //Method 1 : 
    string str;
    cin>>str;   //takes only a word as input, breaks as soon as spacce encountered.
    cout<<str<<endl;

    string str2;
    getline(cin, str2);
    cout<<str2<<endl;     //getline takes whole line as input

    //Method 2 :
    string str3 = "Ashwin Aradhaya";
    cout<<str3<<endl;

    //Method 3: 
    string str4(5, 'a');
    cout<<str4<<endl;
} 