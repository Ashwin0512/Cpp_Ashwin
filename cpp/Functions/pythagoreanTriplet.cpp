#include<iostream>
using namespace std;

bool check(int a, int b, int c) {
    if((a*a + b*b == c*c)||(a*a + c*c == b*b)||(c*c + b*b == a*a)){
        return true;
    }   else{
        return false;
    }
}

int main()  {
    cout<<"Enter three numbers : ";
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))    {
        cout<<"Pythagorean triplet";
    }   else    {
        cout<<"NOT a Pythagorean Triplet";
    }
}