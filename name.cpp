#include<iostream>
#include<string.h>
using namespace std;
string name(int n)
{
	string names[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int a = n%10;
	string ans = names[a];
	if(n<10)
	{
		return names[n];
	}
	return name(n/10)+" " +ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<name(n);
	return 0;
}
