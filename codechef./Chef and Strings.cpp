#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        int arr[n];
        for(long i = 0;i<n;i++){
            cin>>arr[i];
        }
        long skip = 0;
        for(long i = 0;i<n-1;i++){
            long num;
            if(arr[i]<arr[i+1]){
              num = arr[i+1]-arr[i]-1;
            }
            else if(arr[i]==arr[i+1]){
                num = 0;
            }
            else{
                num = arr[i]-arr[i+1]-1;
            }
            skip = skip+num;
        }
        cout<<skip<<endl;
    }
    return 0;
}
