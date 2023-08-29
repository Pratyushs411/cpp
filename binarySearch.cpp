#include<iostream>
#include<string.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	while(start<=end)
	{
		int mid = (start+end)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter lenght of array:";
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
	int result = binarySearch(arr,n,a);
	if(result == -1)
	{
		cout<<"number not found"<<endl;
		return 0;
	}
	cout<<"number is at index "<<result<<endl;
	return 0;
}
