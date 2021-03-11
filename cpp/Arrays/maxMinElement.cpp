#include<iostream>
#include<climits>
using namespace std;

int main()  {

    cout<<"Enter number of elements in the array : ";
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)  {
        cin>>arr[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=1 ; i<n ; i++)    {
        
        if(arr[i]>max)  {
            max = arr[i];
        }   

        if(arr[i]<min)  {
            min = arr[i];
        }
    }

    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;
}