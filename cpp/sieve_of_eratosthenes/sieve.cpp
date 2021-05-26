#include<bits/stdc++.h>
using namespace std;

void print_prime(int n) {
    int arr[n+1] = {0};
    
    for(int i=2 ; i<=n ; i++)    {
        if(arr[i] == 0)  {
            for(int j=i*i ; j<=n ; j+=i) {
                arr[j] = 1;
            }
        }
    }

    cout<<"Prime numbers are : \n";
    for(int i=2 ; i<n+1 ; i++)  {
        if(arr[i] == 0) cout<<i<<" ";
    } 
}

int main () {
    cout<<"Enter n : ";
    int n;
    cin>>n;

    print_prime(n);
}