class Solution {
public:
void f(vector<int>& nums, int target,int i,int sum,vector<vector<int>>&result,vector<int>&v)
{
    if(sum==target)
    {
        result.push_back(v);
        return;
    }
    if(sum>target || i>=nums.size())
    return;

    v.push_back(nums[i]);
    f(nums,target,i+1,sum+nums[i],result,v);
    v.pop_back();
    while(i+1<nums.size()&& nums[i]==nums[i+1])
    i++;
    f(nums,target,i+1,sum,result,v);
}
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>v;

        // Sorting to handle duplicates
        sort(candidates.begin(), candidates.end());
        f(candidates,target,0,0,result,v);
        return result;
    }
};
