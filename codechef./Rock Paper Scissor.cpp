#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int countChef = 0;
	    int countChefina = 0;
	    int draw = 0;
	    for(int i = 0;i<n;i++){
	        if(a[i]==b[i]){
	            draw++;
	        }
	        else{
	            if(a[i]=='R'){
	                if(b[i]=='S'){
	                    countChef++;
	                }
	                else{
	                    countChefina++;
	                }
	            }
	            else if(a[i]=='S'){
	                if(b[i]=='P'){
	                    countChef++;
	                }
	                else{
	                    countChefina++;
	                }
	            }
	            else{
	                if(b[i]=='R'){
	                    countChef++;
	                }
	                else{
	                    countChefina++;
	                } 
	            }
	        }
	    }
	    if(countChef>countChefina){
	        cout<<0<<endl;
	    }
	    else{
	        int diff = countChefina-countChef;
	        int ans = (diff/2)+1;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
