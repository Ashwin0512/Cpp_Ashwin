#include<iostream>
#include<cmath>
using namespace std;

int add(int a , int b)  {
    int lastDigit1;
    int lastDigit2;
    int digit;
    int carry=0;
    int sum=0;
    int count=0;

    while(a>0 || b>0) {

        lastDigit1=a%10;
        lastDigit2=b%10;

        if(lastDigit1+lastDigit2+carry==3)  {
            digit=1;
            carry=1;
        }   else if(lastDigit1+lastDigit2+carry==2) {
            digit=0;
            carry=1;
        }   else    {
            digit=lastDigit1+lastDigit2+carry;
            carry=0;
        }

        a/=10;
        b/=10;
        sum += digit * (pow(10,count));
        count++;
        cout<<sum<<endl;
    }
        cout<<carry<<" "<<count<<endl;
    sum = sum + (carry*(pow(10,count)));
    cout<<sum<<endl;
    return sum;
}

int main()  {
    cout<<"Enter 2 binary numbers : \n";
    int a,b;
    cin>>a>>b;

    cout<<add(a,b)<<endl;
}