#include<bits/stdc++.h>
using namespace std;

int getBit(int n , int pos) {
    return (n & (1 << pos)) != 0;
}

int setBit(int n , int pos)  {
    return (n | (1<<pos));
}

int clearBit(int n , int pos)   {
    return (~(1<<pos)&n);
}

int updateBit(int n , int pos , int val)    {
    int toReturn = 0;
    if(val == 1)    {
        toReturn = (n | (1<<pos));
    }   else if(val == 0)   {
        toReturn = ((~(1<<pos) & n));
    } 
    return toReturn;
}

int main()  {
    cout<<getBit(5,2)<<endl;
    cout<<setBit(2,0)<<endl;
    cout<<clearBit(11,1)<<endl;
    cout<<updateBit(11,1,0);
}