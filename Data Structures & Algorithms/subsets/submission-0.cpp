class Solution {
public:
    void f(vector<int>& nums,int i, vector<int>&v,vector<vector<int>>&result)
    {
        if(i==nums.size())
        {
            result.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        f(nums,i+1,v,result);
        v.pop_back();
        f(nums,i+1,v,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>result;
        f(nums,0,v,result);
        return result;
    }
};
