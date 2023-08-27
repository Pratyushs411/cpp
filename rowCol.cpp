#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter dimensions of matrix"<<endl;
	cin>>n>>m;
	int arr[n][m];
	cout<<"enter matrix"<<endl;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
		cin>>arr[i][j];	
		}
	}
	
	
	for(int k = 0;k<m;k++)
	{
		int sumCol = 0;
		for(int a = 0;a<n;a++){
		sumCol = sumCol + arr[a][k];
		}
		cout<<"sumCol"<<k<<"="<<sumCol<<endl;}
	for(int l = 0;l<n;l++)
	{
		int sumRow = 0;	
		for(int b = 0;b<m;b++)
		{
		sumRow = sumRow + arr[l][b];
		}
		cout<<"sumRow"<<l<<"="<<sumRow<<endl;
	}
	return 0;
}
