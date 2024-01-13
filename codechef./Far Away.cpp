#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        long a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        long sum = 0;
        for(int i = 0;i<n;i++){
            long mid = m/2;
            long add;
            if(a[i]<=mid){
                add = m-a[i];
            }
            else{
                add = a[i]-1;
            }
            sum = sum+add;
        }
        cout<<sum<<endl;
    }
    return 0;
}
