class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+2);
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        dp[i]=max(nums[i]+dp[i+2],dp[i+1]);

        return dp[0];
    }
};
