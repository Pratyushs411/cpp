#include<iostream>
#include<string.h>
using namespace std;
bool reverseString(string str,int size,int s)
{
	if(s>size)
	{
		return true;
	}
	if(str[s]!=str[size])
	{
		return false;
	}
	else{
		s++;
	size--;
	reverseString(str,size,s);
	}
	
}
void swap(string a,string b)
{
	string c = a;
	a = b;
	b =c;
}
int main()
{
	string a = "abbccbba";
	int b = a.size();
	bool c = reverseString(a,b-1,0);
	if(c)
	{
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
	
	return 0;
}
