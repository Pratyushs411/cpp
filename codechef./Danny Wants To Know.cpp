#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here rating 1088
    long n,q,l,r;
    cin>>n>>q;
    long a[n],b[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    for(int i = 0;i<q;i++){
        cin>>l>>r;
        long sum = 0;
        for(int j = l-1;j<r;j++){
            sum = sum+(a[j]*b[j]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
