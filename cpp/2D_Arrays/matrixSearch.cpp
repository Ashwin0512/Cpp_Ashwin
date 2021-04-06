#include<iostream>
using namespace std;

int main()  {
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)    {
        for(int j=0;j<m;j++)    {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the number to be searched for : ";
    int k;
    cin>>k;
    bool check;

    for(int i=0;i<n;i++)    {
        for(int j=0;j<m;j++)    {
            if(arr[i][j] == k)  {
                cout<<i<<" "<<j<<endl;
                check=true;
            }
        }
    }
   
   if(check)    {
       cout<<"Number found. \n";
   }    else    {
       cout<<"Number not found. \n";
   }
}