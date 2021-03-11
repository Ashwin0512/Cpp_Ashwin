#include<iostream>
#include<cmath>
using namespace std;

int convert(long binary)    {
    
    int count=0;
    int final=0;

    while(binary>0)   {
        int lastDigit = binary%10;
        final += lastDigit*pow(2,count);
        count++;
        binary /= 10;

        if((lastDigit<0) || (lastDigit>=2)) {
            final=-1;
            break;
        }
    }
    return final;
}

int main()  {
    cout<<"Enter a binary number \n";
    long binary;
    cin>>binary;

    if(convert(binary)!=-1)   {
        cout<<" decimal is : "<<convert(binary);
    }   else    {
        cout<<"ENTER AN VALID BINARY NUMBER";
    }
}