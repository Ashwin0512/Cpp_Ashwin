#include<iostream>
using namespace std;

int main()  {
    cout<<"Enter smaller number of the range : ";
    int small;
    cin>>small;

    cout<<"Enter larger number of the range : ";
    int large;
    cin>>large;

    int temp;
    if(small<=2)    cout<<2<<endl;
    for(int i=small ; i<=large ; i++)   {
        for(int j=2 ; j<i ; j++)    {
            if(i%j==0)  {
                temp=2;
                break;
            }
            temp=1;
        }
        
        if(temp==1) cout<<i<<endl;
    }
}