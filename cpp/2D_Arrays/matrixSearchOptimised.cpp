#include<iostream>
using namespace std;

int main()  {
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;

    int num;
    cout<<"Enter number to be searched for in the matrix : ";
    cin>>num;

    int arr[n][m];
    for(int i=0; i<n; i++)  {
        for(int j=0; j<m; j++)  {
            cin>>arr[i][j];
        }
    }

    bool found=false;
    int r=0, c=m-1;
    while(r<m && c>=0)  {
        if(arr[r][m] == num)    {
            found=true;
        } else if(arr[r][m] > num)    {
            c--;
        }   else    {
            r++;
        }
    }  

    if(found)   {
        cout<<"FOUND";
    }   else    {
        cout<<"NOT FOUND";
    }
}