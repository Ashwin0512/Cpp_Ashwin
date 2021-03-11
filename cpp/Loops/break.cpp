#include<iostream>
using namespace std;

int main()  {
    
    int money=2000;
    for(int i=1 ; i<=30 ; i++)  {
        if(i%2==0)  {
            continue;
        }
        if(money<=0)    {
            break;
        }
        
        cout<<i<<" : "<<"Go out today !!!"<<endl;
        money -= 300;
    }
    return 0;
}