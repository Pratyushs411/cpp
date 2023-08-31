#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	int n;
	cin>>n;
	int count=1;
	while(n>count+1){
	    count++;
	    n = n-count;
	}
	cout<<count<<endl;
	t--;
}
return 0;
}
