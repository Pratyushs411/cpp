#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int>& arr, int n, int x)
{
    // Initialize start and end pointers
    int startIndex = 0, endIndex = n - 1;

    // Initialize a pointer for starting index of x
    int xStartIndex = -1;

    while (startIndex <= endIndex)
    {
        int mid = startIndex + (endIndex - startIndex) / 2;

        if(arr[mid] >= x)
        {
            // If mid value is x, update index
            if(arr[mid] == x)
                xStartIndex = mid;

            // Search on left
            endIndex = mid - 1;
        }
        else
        {
            // Search on right
            startIndex = mid + 1;
        }
    }

    // Return xStartIndex;
    return xStartIndex;
}

int count(vector<int>& arr, int n, int x) {
    int xStartIndex;

    xStartIndex = firstOccurrence(arr, n, x);

    // If x is not present
    if (xStartIndex == -1)
    {
        return 0;
    }

    int cnt = 0;

    for(int i = xStartIndex; i < n; ++i)
    {
        if (arr[i] == x)
        {
            ++cnt;
        }
        else
        {
            break;
        }
    }

    cout<<cnt<<endl;
    return{};

    }
     int main()
    {
    int n;
	cout<<"enter size of array:"; 
    cin>>n; 
    int a;
    vector<int> v;
    cout<<"enter array:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int k;
    cout<<"enter target:";
    cin>>k;
    count(v,n,k);
    return 0;
	}
