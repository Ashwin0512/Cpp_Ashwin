#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(56);

    cout << "Finding 4 -> " << binary_search(v.begin(), v.end(), 4)<<endl;
    cout << "Finding 9 -> " << binary_search(v.begin(), v.end(), 9)<<endl;

    cout<<"Lower bound of 9 -> "<<lower_bound(v.begin(),v.end(),9) - v.begin()<<endl;
    cout<<"Upper bound of 9 -> "<<upper_bound(v.begin(),v.end(),9) - v.begin()<<endl;

    float a=4.6 , b=7.9;
    cout<<"Max -> "<<max(a,b)<<endl;
    cout<<"Min -> "<<min(a,b)<<endl;

    cout<<"a = "<<a<<" , b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<" , b = "<<b<<endl;

    string ashwin = "ashwin";
    reverse(ashwin.begin() , ashwin.end());
    cout<<ashwin<<endl;

    rotate(v.begin(), v.begin()+2 , v.end());
    cout<<"After rotation : ";
    for(int i:v)    {
        cout<<i<<" ";
    }

    sort(v.begin() , v.end()); 
    cout<<"\n After sorting : ";
    for(int i:v)    {
        cout<<i<<" ";
    }
}