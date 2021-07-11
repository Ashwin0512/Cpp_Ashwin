#include<iostream>
#include<queue>
using namespace std;

// FIFO Concept - First In First Out

int main()  {

    queue<string> q;

    q.push("Ashwin");
    q.push("Raj");
    q.push("Singh");

    cout<<"First element -> "<<q.front()<<endl;
    cout<<"Size before pop -> "<<q.size()<<endl;
    
    q.pop();
    cout<<"First element -> "<<q.front()<<endl;

    cout<<"Size after pop -> "<<q.size()<<endl;
}