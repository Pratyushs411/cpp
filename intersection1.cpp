class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       for(int i = 0;i<nums1.size();i++)
       {
           for(int j = 0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                            ans.push_back(nums2[j]);
                }
            }
       }
       sort(ans.begin(),ans.end());
       std::set<int> uniqueElements;
       vector<int> resultVector;
       for (int num : ans) {
        if (uniqueElements.insert(num).second) {
            resultVector.push_back(num);
        }
    }
       return resultVector; 
    }
};
