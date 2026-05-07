class Solution {
public:
void f(vector<int>& nums, int target,int i,int sum,vector<vector<int>>&result,vector<int>v)
{
    if(i==nums.size())
    return;
    if(sum==target)
    {
        result.push_back(v);
        return;
    }
    if(sum>target)
    {
        return;
    }

    sum+=nums[i];
    v.push_back(nums[i]);
    f(nums,target,i,sum,result,v);
    v.pop_back();
    sum-=nums[i];
    f(nums,target,i+1,sum,result,v);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        vector<int>v;
        f(nums,target,0,0,result,v);
        return result;
    }
};
