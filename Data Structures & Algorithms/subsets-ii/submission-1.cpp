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
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        f(nums,i+1,v,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>v;
        sort(nums.begin(),nums.end());        
        f(nums,0,v,result);
        return result;
    }
};
