#include<bits/stdc++.h>
using namespace std;

void prime_factor(int n)    {
    int spf[n+1] = {0};
    for(int i=2 ; i<=n ; i++)   {
        spf[i] = i;
    }

    for(int i=2 ; i<=n ; i++)   {
        if(spf[i] == i) {
            for(int j=i*i ; j<=n ; j+=i)    {
                if(spf[j] == j)  {
                    spf[j] = i;
                }
            }
        }
    }
    
    while(n != 1)   {
        cout<<spf[n]<<" ";
        n /= spf[n];
    }
}

int main()  {
    cout<<"Enter the number : ";
    int n;
    cin>>n;

    cout<<"Prime factors are : \n";
    prime_factor(n);
}