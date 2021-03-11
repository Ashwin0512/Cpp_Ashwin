#include<iostream>
#include<math.h>
using namespace std;

long convert(long decimal)  {
    int count=0;
    long octal=0;

    while(decimal>0)    {
        int lastDigit=decimal%8;
        decimal/=8;
        octal+=lastDigit*(pow(10,(count)));
        count++;
        cout<<octal<<"  ";
    }
    return octal;
}

int main() {
    cout<<"Enter a number in 10 base : ";
    long decimal;
    cin>>decimal;

    cout<<"The number in Octal base is : "<<convert(decimal)<<endl;
}
