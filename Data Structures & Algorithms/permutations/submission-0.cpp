class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>>&result,int start)
    {
        if(start==nums.size()){
            result.push_back(nums);
        }
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            f(nums,result,start+1);
            swap(nums[start],nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        f(nums,result,0);
        return result;
    }
};
