#include<bits/stdc++.h>
using namespace std;

vector <int> twoSums (vector<int>& nums , int target)   {
    vector<int> v;
    
    for(int i=0 ; i<nums.size()-1 ; i++)    {
        for(int j=i+1 ; j<nums.size() ; j++)    {
            int sum = nums[i] + nums[j];

            if(sum == target)   {
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return vector<int> ();
}

int main()  {
    vector<int> v;
    int n;
    cout<<"Enter the numbers in the array. Enter -1 to stop.\n";

    while(1) {
        cin>>n;
        if(n == -1) break;
        v.push_back(n);
    }

    cout<<"Enter the target number : ";
    int target; cin>>target;

    for(int i=0 ; i<twoSums(v,target).size() ; i++)    {
        cout<<twoSums(v,target)[i]<<" ";
    }
}

