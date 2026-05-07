class Solution {
public:
    int cs(int n,vector<int>&dp) {
        if(n<=1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];

        return dp[n]=cs(n-1,dp)+cs(n-2,dp);
    }
    int climbStairs(int n) {
        if(n<=1)
        return 1;
        vector<int>dp(n+1,-1);
        cs(n,dp);
        return dp[n];
    }
};
