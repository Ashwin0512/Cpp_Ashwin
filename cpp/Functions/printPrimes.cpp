#include<iostream> 
#include<math.h>
using namespace std;

bool isPrime(int n) {
    
    if(n<2) return false;
    
    for(int i=2 ; i<n ; i++)    {
        if(n%2==0)  return false;
    }
    return true;
}

int main()  {
    
    cout<<"Enter starting number of the range \n";
    int a;
    cin>>a;
    
    cout<<"Enter ending number of the range \n";
    int b;
    cin>>b;
    
    for(int i=a ; i<=b ; i++)   {
        if(isPrime(i)==true) cout<<i<<endl;
    }
    return 0;
}

