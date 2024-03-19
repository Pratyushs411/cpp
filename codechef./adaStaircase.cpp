#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>diff;
        diff.push_back(arr[0]);
        for(int i = 1;i<n;i++){
            diff.push_back(arr[i]-arr[i-1]);
        }
        int m = diff.size();
        long count = 0;
        for(int i = 0;i<m;i++){
        if(diff[i]>k){
        count+=(k==1)?(diff[i]-1):(diff[i]%k==0)?(diff[i]/k)-1:(diff[i]/k);
            }
        }
        cout<<count<<endl;
    }
}
