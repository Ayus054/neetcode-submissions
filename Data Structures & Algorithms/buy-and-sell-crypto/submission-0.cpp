class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=0,mP=0;
        while(left<=right && right<prices.size())
        {
            if(prices[right]-prices[left]<0)
            left++;
            else
            {
                mP=max(mP,(prices[right]-prices[left]));
                right++;
            }
        }
        return mP;
    }
};
