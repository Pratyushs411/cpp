#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s)
{
	while(!s.empty())
	{
		int d = s.top();
		cout<<d<<" ";
		s.pop();
	}
	cout<<endl;
}
void deleteMiddle(stack<int>&s){
	int size = s.size();
	stack<int> a;
	int n = (size/2);
	for(int i = 0;i<n;i++)
	{
		a.push(s.top());
		s.pop();
	}
	s.pop();
	while(!a.empty())
	{
		s.push(a.top());
		a.pop();
	}
}
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	print(s);
	deleteMiddle(s);
	print(s);
	return 0;
}
