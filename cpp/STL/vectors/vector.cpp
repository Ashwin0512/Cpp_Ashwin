#include<iostream>
#include<vector>
using namespace std;

int main()  {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);     /* push_back is used to add an element to the end of the vector. */
    v.push_back(3);

    for(int i=0 ; i<v.size() ; i++) {     // can use a for loop to iterate through the vector.
        cout<<v[i]<<" ";
    }

    cout<<endl;

    /* an iterator can be used to traverse through a vector.  Iterator is a pointer */
    
    vector<int> :: iterator it;    
    for(it = v.begin() ; it != v.end() ; it++)   {
         cout<<*it<<" ";
    }

    cout<<'\n';

    /* using auto keyword also we can traverse through the vector. Element is used for the values 
    in the vector. Auto keyword would automatically iterate through all the element values in vector v. */

    for(auto element:v)    {
        cout<<element<<" ";  
    }

    v.pop_back();       // removes the end element from the vector
    cout<<'\n';

    for(auto element : v)   {       // now we can see that last element(3) is removed.
        cout<<element<<" ";
    }
    
    vector<int> v2 (3,50);  // this would create a vector of pre-defined size 3 whose all elements are 50.

    swap(v,v2);      // swap the values of v and v2.

    cout<<endl;
    for(auto element : v)   {       // we can see that vector v now contains elements of vector v2
        cout<<element<<" ";
    }

    cout<<endl;
    vector<int> :: iterator it2;        // we can now see elements of vector v are present in vector v2.
    for(it2 = v2.begin() ; it2 != v2.end() ; it2++)    {        
        cout<<*it2<<" ";
    }

     
}