class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        {
            if(um.find(target-nums[i])!=um.end())
            {
                v.push_back(um[target-nums[i]]);
                v.push_back(i);
            }
            else
            um[nums[i]]=i;
        }
        return v;
    }
};
