class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(um.find(target-nums[i])!=um.end())
            {
                v.push_back(um[target-nums[i]]);
                v.push_back(i);
            }
            um[nums[i]]=i;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
