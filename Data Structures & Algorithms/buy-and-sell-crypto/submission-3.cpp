class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=prices[0];
        int ans=0;
        for(int j=1;j<prices.size();j++)
        {
            if(prices[j]<=i)
            {
                i=prices[j];
            }
            int r=prices[j]-i;
            ans=max(ans,r);
        }
        return ans;
    }
};
