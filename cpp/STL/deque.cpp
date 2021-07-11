#include<iostream>
#include<deque>
using namespace std;

int main()  {

    deque<int> d;
    
    d.push_back(2);
    d.push_front(1);

    for(int i: d)   {
        cout<<i<<" ";
    }

    cout<<"\n";
    d.push_back(4);
    d.push_front(5);

    for(int i: d)   {
        cout<<i<<" ";
    }

    d.pop_back();
    cout<<endl;
    for(int i: d)   {
        cout<<i<<" ";
    }

    d.pop_front();
    cout<<endl;
    for(int i: d)   {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Print first index element -> "<<d.at(0)<<endl;

    cout<<"Print front elemnent -> "<<d.front()<<endl;
    cout<<"Print back element ->"<<d.back()<<endl;

    cout<<"Empty or not -> "<<d.empty()<<endl;

    d.erase(d.begin() , d.begin()+1);
    for(int i: d)   {
        cout<<i<<" ";
    }
}