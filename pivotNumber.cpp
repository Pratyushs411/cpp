class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
       long long int sum= accumulate(nums.begin(),nums.end(),0);
       long long currsum=0;
       for(int i=0;i<nums.size();i++)
       { 
           if(currsum==sum-currsum-nums[i])
            {    
               ans=i;
               break;
           }
            currsum+=nums[i];
       }
       return ans;
    }
};
