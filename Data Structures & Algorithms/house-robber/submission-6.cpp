class Solution {
public:
    int r(vector<int>& nums,int n,int size,vector<int>&dp)
    {
        if(n>=size)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=max(nums[n]+r(nums,n+2,size,dp),r(nums,n+1,size,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return r(nums,0,nums.size(),dp);
    }
};
