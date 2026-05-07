class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>>&result,vector<int>v,int index)
    {
        result.push_back(v);
        
        for(int i=index;i<nums.size();i++)
        {
            if(i>index && nums[i]==nums[i-1])continue;
            v.push_back(nums[i]);
            f(nums,result,v,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>v;
        sort(nums.begin(),nums.end());
        f(nums,result,v,0);
        return result;
    }
};
