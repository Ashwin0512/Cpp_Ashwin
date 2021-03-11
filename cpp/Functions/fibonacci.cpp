#include<iostream>
using namespace std;

void fib(int n) {
    
    unsigned int a=0;
    unsigned int b=1;
    unsigned int next;

    for(int i=1 ; i<n+1 ; i++)  {
        cout<<a<<endl;
        next=a+b;
        a=b;
        b=next;
    }
}

int main()  {
    cout<<"Enter number of terms you want \n";
    int n;
    cin>>n;
    fib(n);
    return 0;
}