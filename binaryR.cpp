#include<iostream>
using namespace std;
bool binarySearch(int s,int e,int *arr,int key)
{
	if(s>e)
	{
		return false;
	}
    int m = s + (e-s)/2;
   if(arr[m]==key)
    {
    	return true;
	}
	if(arr[m]<key)
	{
	return binarySearch(m+1,e,arr,key);
	}
	else{
		return binarySearch(s,m-1,arr,key);
	}
     
}
int main()
{
	int arr[6] = {2,4,6,10,14,16};
	int size = 6;
	int key = 14;
	int ans = binarySearch(0,size,arr,key);
	if(ans)
	{
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
