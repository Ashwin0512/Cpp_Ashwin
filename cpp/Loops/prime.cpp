#include<iostream>
using namespace std;

int main()  {
   
    int temp;
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=2 ; i<n ; i++)   {
        if(n%i==0)  {
            temp=2;
            break;
        }
        temp=1;
    }

    if(temp==2) {
        cout<<n<<" is a composite number";
    }   else    {
        cout<<n<<" is a prime number";
    }
}