//rating 1085
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int win = 0;
        int lose = 0;
        string a;
        bool draw = true;
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                win++;
            }
            else{
                lose++;
            }
            if(win == 11 && lose<10){
                a = "WIN";
                draw = false;
                break;
            }
            else if(win < 10 && lose==11){
                a = "LOSE";
                draw = false;
                break;
            }
        }
        if(draw){
          if(win==lose+2){
              a = "WIN";
          }
          else{
              a = "LOSE";
          }
        }
        cout<<a<<endl;
    }
    return 0;
}
