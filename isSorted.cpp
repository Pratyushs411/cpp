#include<iostream>
using namespace std;
bool isSorted(int *arr,int n)
{
	if(n==0 || n==1)
	{
		return true;
	}
	if(arr[0]>arr[1])
	{
		return false;
	}
	else{
	bool ans=isSorted(arr + 1,n-1);
	return ans;
}
}
int main()
{
	int arr[5] = {1,2,6,4,5};
	int n = 5;
    bool ans = isSorted(arr,n);
	if(ans)
	{
		cout<<"sorted";
	}
	else{
		cout<<"false";
	}
	return 0;
}
