class Solution {
public:
    int mc(vector<int>& cost,int n,int size,vector<int>&dp)
    {
        if(n>=size)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]= cost[n]+min(mc(cost,n+1,size,dp),mc(cost,n+2,size,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        return min(mc(cost,0,cost.size(),dp),mc(cost,1,cost.size(),dp));
    }
};
