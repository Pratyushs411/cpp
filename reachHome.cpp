#include<iostream>
using namespace std;
int reachHome(int a,int b)
{
	cout<<a<<" ";
if(a==b)
{
	return b;
	}
	return 	reachHome(a+1,b);
}
int main()
{
	int home = 10;
	int src = 5;
	reachHome(src,home);
	return 0;
}
