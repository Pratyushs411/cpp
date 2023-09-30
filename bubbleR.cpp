#include<iostream>
using namespace std;
void bubbleSort(int *arr,int size)
{
	if(size==1)
	{
		return;
	}
	for(int i=0;i<size-1;i++){
	if(arr[i]>arr[i+1])
	{
		swap(arr[i],arr[i+1]);
	}}
	bubbleSort(arr,size-1);
}
void swap(int a,int b)
{
	int c = a;
	a=b;
	b=c;
}
int main()
{
	int arr[6] = {3,5,2,7,9,6};
	int size = 6;
	bubbleSort(arr,size);
	for(int i = 0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
