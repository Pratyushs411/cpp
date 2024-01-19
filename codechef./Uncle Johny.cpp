#include <bits/stdc++.h>
using namespace std;
//rating 1093
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        int john = arr[k-1];
        sort(arr,arr+n);
        for(int i= 0;i<n;i++){
            if(arr[i]==john){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
