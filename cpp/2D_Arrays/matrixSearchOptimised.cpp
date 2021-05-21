#include<iostream>
using namespace std;

int main()  {
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n; i++)  {
        for(int j=0; j<m; j++)  {
            cin>>arr[i][j];
        }
    }

    int num;
    cout<<"Enter number to be searched for in the matrix : ";
    cin>>num;

    bool found=false;
    int r=0, c=m-1;
    cout<<arr[r][c]<<endl;
    while(r<n && c>=0)  {
        if(arr[r][c] == num)    {
            found=true;
        } 
        arr[r][c] > num ? c-- : r++;
    }  
 
    if(found)   {
        cout<<"FOUND \n";
    }   else    {
        cout<<"NOT FOUND \n";
    }
}