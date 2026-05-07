class Solution {
public:
    void cs(int n,vector<int>&dp)
    {
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];        
        }
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        cs(n,dp);
        return dp[n];
    }
};
