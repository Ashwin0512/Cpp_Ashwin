#include<iostream>
#include<map>
using namespace std;

/* Data is stored in form of key-value pair 
All keys are unique (a particular key points to a particular element only)
Although 2 elements can ppint to the same key, just as in FUNCTION. IT CAN BE MANY-ONE BUT EACH ELEMENT MUST HAVE 
UNIQUE IMAGE OR UNIQUE KEY IN THIS CASE. 

SORTED ORDER  */

int main()  {

    map<int, string> m;

    m[45] = "ashwin"; 
    m[10] = "raj";
    m[1] = "singh";
    m[2] = "bhadauria";

    m.insert({5,"bheem"});

    for(auto i:m) {
        cout<<i.first<<" ";
    }
    cout<<"\n"<<endl;

    for(auto i:m)   {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Is 13 present -> "<<m.count(13)<<endl;
    cout<<"Is 5 present -> "<<m.count(5)<<endl;  

    cout<<"Erasing 5....."<<endl;
    m.erase(5);

    cout<<"Is 13 present -> "<<m.count(13)<<endl;
    cout<<"Is 5 present -> "<<m.count(5)<<endl;  

    auto it = m.find(2);

    for(auto i=it ; i != m.end() ; i++) {
        cout << (*i).first <<" ";
    }
    cout<<endl;

} 