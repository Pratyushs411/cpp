int getPivot(int* arr,int n)
{
    int s = 0;
    int e = n-1;
    int m;
    while(s<e)
    {
        m = s + (e-s)/2;
        if(arr[m] >= arr[0])
        {
            s = m +1;
        }
        else{
            e = m;
        }
    }
    return s;
}
int binarySearch(int* arr,int s,int e,int k)
{
	while(s<=e)
	{
		int m = (s+e)/2;
		if(arr[m]==k)
		{
			return m;
		}
		else if(arr[m]>k)
		{
			e = m-1;
		}
		else{
			s = m+1;
		}
	}
	return -1;
}
int search(int* arr, int n, int key) {
    int p = getPivot(arr,n);
    int s,e;
    if (key >= arr[p] && key < arr[n - 1]) {
        return binarySearch(arr,p,n-1,key);
    }
    else{
        return binarySearch(arr,0,p,key);
    }
}
