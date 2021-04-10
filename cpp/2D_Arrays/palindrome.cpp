#include<iostream>
using namespace std;

int main()  {
    char arr[100];
    cout<<"Input the word : ";
    cin>>arr;
    int i=0,n=0;
    bool check=true;

    while(arr[i] != '\0')   {
        n++; i++;
    }
    i=0;
    
    while(i <= n/2) {
        if(arr[i] != arr[n-i-1])    {
            check = false;
        }
        i++;
    }
    
    if(check)   {
        cout<<"It is a palindrome. \n";
    }   else    {
        cout<<"It is not a palindrome. \n";
    }
}