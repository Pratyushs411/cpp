#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        int curr = x;
        for(int i = 1;i<=s;i++){
            int a,b;
            cin>>a>>b;
            if(a==curr){
                curr = b;
            }
            else if(b==curr){
                curr = a;
            }
            else{}
        }
        cout<<curr<<endl;
    }
}
