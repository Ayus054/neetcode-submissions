class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int k=i+1;
            int j=nums.size()-1;
            while(k<j)
            {
                if(nums[i]+nums[k]+nums[j]==0)
                {
                    result.push_back({nums[i],nums[j],nums[k]});

                    while(k<j && nums[k]==nums[k+1])
                    k++;
                    while(k<j && nums[j]==nums[j-1])
                    j--;

                    k++;
                    j--;

                }
                else if(nums[i]+nums[k]+nums[j]>0)
                j--;
                else
                k++;
            }
        }
        return result;
    }
};
