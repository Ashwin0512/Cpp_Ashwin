#include<iostream>
#include<set>
using namespace std;

// Unique elements are stored
// Modification of elements not allowed
// Elements are returned in sorted order
// In unordered set, elements are not returned in sortes order but it is faster than set.

int main()  {
    set<int> s;

    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(0);
    s.insert(6);

    for(int i : s)  {
        cout<<i<<" ";
    }
    cout<<"\n";

    set<int> :: iterator it = s.begin();
    it++ ;

    s.erase(it );
    for(int i : s)  {
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<"Is 5 present in s -> "<<s.count(5)<<endl;
    cout<<"Is -5 present in s -> "<<s.count(-5)<<endl;

    set<int> :: iterator itr = s.find(5);

    cout<<"Value present at itr -> "<<*itr<<endl;
}