#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        double chef1X,chef1y,chef2X,chef2y,chef3X,chef3y;
        cin>>chef1X>>chef1y>>chef2X>>chef2y>>chef3X>>chef3y;
        double chef12 = pow((pow((chef1X-chef2X),2) + pow((chef1y-chef2y),2)),0.5);
        double chef23 = pow((pow((chef2X-chef3X),2) + pow((chef2y-chef3y),2)),0.5);
        double chef13 = pow((pow((chef1X-chef3X),2) + pow((chef1y-chef3y),2)),0.5);
        if((chef23<=r && chef12<=r) || (chef12<=r && chef13<=r) || (chef13<=r&&chef23<=r)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        }
        return 0;
    }
