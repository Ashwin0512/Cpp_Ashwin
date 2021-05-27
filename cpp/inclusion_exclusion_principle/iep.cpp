#include<bits/stdc++.h>
using namespace std;

int div_by_exact_one(int n , int a , int b)  {
    int by_a = n/a;
    int by_b = n/b;
    int by_both = n/(a*b);

    return by_a + by_b - by_both;
}

int main()  {   
    cout<<div_by_exact_one(1000,5,7);
}