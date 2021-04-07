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

    int row = n, col = m, var=0;

    while(row > n/2 && col > m/2)  {
        for(int i=var ; i<col ; i++)   {
            cout<<arr[var][i]<<" ";
        }
        for(int i=var+1 ; i<row; i++)   {
            cout<<arr[i][col-1]<<" ";
        } 
        for(int i=col-2 ; i>=var; i--)   {
            cout<<arr[row-1][i]<<" ";
        } 
        for(int i=row-2 ; i>=var+1; i--)   {
            cout<<arr[i][var]<<" ";
        } 

        row--; col--; var++;
    }
}