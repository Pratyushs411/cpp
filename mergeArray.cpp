class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num;
        for(int i = 0;i<nums1.size();i++)
        {
            if(nums1[i]!=0)
            num.push_back(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++)
        {
            if(nums2[i]!=0)
            num.push_back(nums2[i]);
        }
        for(int i = 0;i<num.size();i++)
        {
            for(int j = i+1;j<num.size();j++)
            {
                if(num[i]>num[j])
                {
                    int z = num[i];
                    num[i] = num[j];
                    num[j] = z;
                }
            }
        }
        nums1.clear();
        for(int i = 0;i<num.size();i++)
        {
            nums1.push_back(num[i]);
        }
    }
};
