#include<bits/stdc++.h>
using namespace std;

int largest_num(int n)  {
    string num_str = to_string(n);
    sort(num_str.begin() , num_str.end() , greater<int>());
    return stoi(num_str);
}

int main()  {
    cout<<"Enter the number : ";
    int n;
    cin>>n;

    cout<<"Largest number using the digits of given number is : "<<largest_num(n)<<endl;
}