#include<iostream>
using namespace std;
int powerTwo(int n)
{
	if(n==0)
	{
		return 1;
	}
	return 2*powerTwo(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<powerTwo(n);
	return 0;
}
