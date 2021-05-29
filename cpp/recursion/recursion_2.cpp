#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[] , int n)  {
    if(n==1) return true;
    
    bool restArray = sorted(arr+1 , n-1);
    return(arr[0]<arr[1] && restArray);
}

void print_decreasing(int n)    {
    if(n == 0){
        cout<<"0 ";
        return;
    }
    cout<<n<<" ";
    print_decreasing(n-1);
}

void print_increasing(int n)    {
    
    if(n==0) {
        cout<<"0 ";
        return;
    }
    
    print_increasing(n-1);
    cout<<n<<" ";
}

int first_occ(int arr[] , int n ,int i, int key)    {
   
    if(i == n) return -1;
    if(arr[i] == key) return i;
    return first_occ(arr,n,i+1,key);

}

int last_occ(int arr[] , int n , int i, int key)   {
    
    if(i == n)  return -1;
    if(arr[n-i-1] == key) return n-i-1;
    return last_occ(arr,n,i+1,key);

}

int main()  {
    int arr[] = {1,2,3,4,5,6};
    cout<<sorted(arr,6)<<endl;
    print_decreasing(10);
    cout<<"\n";
    print_increasing(10);
    cout<<"\n";

    int arr_2[] = {4,2,1,2,5,2,7};
    cout<<first_occ(arr_2 , 7 , 0 , 2)<<endl;
    cout<<last_occ(arr_2 , 7, 0 , 2)<<endl;
}