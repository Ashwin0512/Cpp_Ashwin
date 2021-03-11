#include<iostream>
using namespace std;

int length(int array[], int n)  {
    
    int curDif = array[0] - array[1];
    int curLength=2;
    int ans=2;

    for(int i=2 ; i<n ; i++)    {
        if(array[i]-array[i-1] == curDif)   {
            curLength++;
        }   else    {
            curDif = array[i]-array[i-1];
            curLength=2;
        }

        if(curLength>ans)   {
            ans = curLength;
        }
    }
    return ans;
}

int main()  {
    cout<<"Enter number of elements in array : ";
    int n;
    cin>>n;

    int array[n];

    for(int i=0; i<n; i++)  {
        cin>>array[i];
    }

    cout<<length(array,n);
}