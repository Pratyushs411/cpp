#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int even_sum=0;
	int odd_sum=0;
	while(n>0)
	{
		int z= n%10;
                if (z % 2 == 0) {
                  even_sum += z;
                } else {
                  odd_sum += z;
                }
        n = n/10 ;
        }
        cout<<even_sum<<" "<<odd_sum<<endl;
	return 0;
}
