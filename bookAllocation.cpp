bool isPossible(vector<int> &arr, int n, int m,int mid,int ans)
{
    int count = 1;
    int pages = 0;
    for(int i = 0;i<n;i++)
    {
        if(pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else{
            count++;
            if(count>m || arr[i]>mid)
            {
                
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m) {
    if(m>n)
    {
        return -1;
    }
    else{
    int s = 0;
    int sum=0;
    for(int i = 0;i<n;i++)
    {
      sum+=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid,ans))
        {
            e = mid-1;
            ans = mid;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
    }
}
