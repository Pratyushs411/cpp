#include <bits/stdc++.h>
using namespace std;
//rating 1192
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ans = false;
        for(int i = 0;i<n-1;i++){
            if(s[i]>s[i+1]){
                s.erase(i,1);
                ans = true;
                break;
            }
        }
        if(ans){
            cout<<s<<endl;
        }
        else{
            s.erase(n-1,1);
            cout<<s<<endl;
        }
    }
}
