#include<iostream>
#include<queue>
using namespace std;

int main()  {
    // max heap
    // Maximum element is the front element always, when we pop an element out, it is the greatest element always.
    priority_queue<int> maxi;

    // min heap
    // Manimum element is the front element always, when we pop an element out, it is the smallest element always.

    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    maxi.push(6);

    int n = maxi.size();
    for(int i=0 ; i<n ; i++)  {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(6);

    int m = mini.size();
    for(int i=0 ; i<m ; i++)    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}