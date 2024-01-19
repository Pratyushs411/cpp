#include <bits/stdc++.h>
using namespace std;
//raing 1225
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long h,x,y1,y2,k;
        cin>>h>>x>>y1>>y2>>k;
        long countGun = (h%x==0)?(h/x):(h/x)+1;
        long countlaser = 0;
        bool laserfinish = false;
        if((y1*k)<h){
            countlaser = countlaser+(k);
            h = h-(y1*k);
            long laserLeft = (h%y2==0)?(h/y2):(h/y2)+1;
            countlaser = countlaser+laserLeft;
        }
        else{
            if((y1*k)==h){
                countlaser = k;
            }
            else{
                int remain = (h%y1==0)?(h/y1):(h/y1)+1;
                countlaser = countlaser+remain;
            }}
        if(countlaser>countGun){
            cout<<countGun<<endl;
        }
        else{
            cout<<countlaser<<endl;
        }
    }
return 0;}
