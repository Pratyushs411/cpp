#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	cout<<"enter array:"<<endl;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	int a;
	cout<<"enter number to find:";
	cin>>a;
	for(int j = 0;j<n;j++)
	{
		if(arr[j]==a)
		{
			cout<<"number is at index "<<j<<endl;
			return 0;
		}
	}
	cout<<"number not found"<<endl;
	return 0;
}
