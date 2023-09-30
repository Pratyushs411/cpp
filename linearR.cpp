#include<iostream>
using namespace std;
int linearSearch(int *arr,int size,int key,int index)
{
	
	if(arr[0]==key)
	{
		return index;
	}
	if(size==0)
	{
		return -1;
	}
	else{
		linearSearch(arr+1,size-1,key,index+1);
	}
}
int main()
{
	int arr[5] = {3,5,1,2,6};
	int size = 5;
	int key = 2;
	cout<<linearSearch(arr,size,key,0);
	return 0; 
}
