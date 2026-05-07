class Solution {
public:
    int rb(int n,vector<int>& nums,vector<int>&dp)
    {
        if (n < 0) return 0;        // no houses left
        if (n == 0) return nums[0]; // only one house
        if(dp[n]!=-1)
        return dp[n];

        return dp[n]=max(nums[n]+rb(n-2,nums,dp),rb(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return rb(n-1,nums,dp);
    }
};
