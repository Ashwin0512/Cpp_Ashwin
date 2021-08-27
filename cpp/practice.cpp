#include<bits/stdc++.h>
using namespace std;

void pairedElements(int arr[], int n, int sum)   {
    int low=0, high=n-1;
    sort(arr,arr+n);
    while(low<high) {
        if(arr[low] + arr[high] == sum) {
            cout<<"("<<arr[low]<<","<<arr[high]<<")\n";
            // low++;
            // high--;
        }   else if(arr[low]+arr[high] < sum)   {
            low++;
        }   else    {
            high--;
        }
    }
}

int main()  {
    int arr[] = {2,3,4,-2,6,8,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    pairedElements(arr,n,6);
}