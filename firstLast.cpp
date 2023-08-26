#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
         int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid]==target)
        {
         ans = mid;
         end = mid-1;   
        }
        else if(nums[mid]<target)
        {
            start = mid+1;
        }
        else if(nums[mid]>target)
        {
            end = mid-1;
        }
    }
    int s = 0;
    int e = n-1;
    int a = -1;
    while(s<=e)
    {
        int m = s + (e-s)/2;
        if(nums[m]==target)
        {
         a = m;
         s = m+1;   
        }
        else if(nums[m]<target)
        {
            s = m+1;
        }
        else if(nums[m]>target)
        {
            e = m-1;
        }
    }
    cout<<"["<<ans<<","<<a<<"]"<<endl;
    return {};
    }
    int main()
    {
    int n;
	cout<<"enter size of array:"; 
    cin>>n; 
    int a;
    vector<int> v;
    cout<<"enter array:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int k;
    cout<<"enter target:";
    cin>>k;
    searchRange(v,k);
    return 0;
	}
