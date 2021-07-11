#include<iostream>
#include<stack>
using namespace std;

// LIFO - Last In First Out Concept followed in Stack

int main()  {
    stack<string> s;

    s.push("Ashwin");
    s.push("Raj");
    s.push("Singh");

    cout<<s.top()<<endl;    // It prints 'Singh' as it was the last entered element, so it is the top element in the stack.

    s.pop();                // Singh is popped out.  
    cout<<s.top()<<endl;

    cout<<"Size of stack -> "<<s.size()<<endl;

    cout<<"Empty or not -> "<<s.empty()<<endl;
}