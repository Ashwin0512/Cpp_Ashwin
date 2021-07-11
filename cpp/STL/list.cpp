#include<iostream>
#include<list>
using namespace std;

/* Implementation of STL list is using doubly linked list.
Direct access using [] or .at() is not allowed in list, you have to traverse to the element to access it. */

int main()  {
    list<int> l;
    
    l.push_back(1);
    l.push_front(2);

    for(int i: l)   {
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<endl;
    for(int i: l)   {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Size of list : "<<l.size();

    list<int> new_list(l);  // copy existing list into a new list
    cout<<endl;
    for(int i: new_list)    {
        cout<<i<<" ";
    }

    list<int> n(5,100);
    cout<<endl;
    for(int i: n)    {
        cout<<i<<" ";
    }
}