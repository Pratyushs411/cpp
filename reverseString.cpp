#include<iostream>
#include<string.h>
using namespace std;
void reverseString(string &a,int size,int s)
{
	if(s>size)
	{
		return ;
	}
	swap(a[s],a[size]);
	s++;
	size--;
	reverseString(a,size,s);

}
void swap(string a,string b)
{
	string c = a;
	a = b;
	b =c;
}
int main()
{
	string a = "pratyush";
	int b = a.size();
	reverseString(a,b-1,0);
	cout<<a;
	return 0;
}
