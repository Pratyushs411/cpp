#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
	int m = s + (e-s)/2;
	int len1 = m-s+1;
	int len2 = e-m;
	int *first = new int[len1];
	int *second = new int[len2];
	int k = s;
	for(int i = 0;i<len1;i++)
	{
		first[i]=arr[k++];
	}
	k = m+1;
	for(int i = 0;i<len2;i++)
	{
		second[i]=arr[k++];
	}
	int index1 = 0;
	int index2 = 0;
	k = s;
	while(index1<len1 && index2<len2)
	{
		if(first[index1]<second[index2])
		{
			arr[k++]=first[index1++];
		}
		else{
			arr[k++]=second[index2++];
		}
	}
	while(index1<len1)
	{
			arr[k++]=first[index1++];
	}
	while(index2<len2)
	{
		arr[k++]=second[index2++];
	}
}
void mergeSort(int *arr,int s,int e)
{
	if(s>=e)
	{
		return ;
	}
	int m = s+(e-s)/2;
	mergeSort(arr,s,m-1);
	mergeSort(arr,m+1,e);
	merge(arr,s,e);

}
int main()
{
	int arr[6]={3,6,8,1,3,5};
	int n = 6;
	mergeSort(arr,0,n-1);
	for(int i = 0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
