class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>st;
        st.push(prices[0]);
        int ml=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<=st.top())
            {
                st.pop();
                st.push(prices[i]);
            }
            else if(prices[i]>st.top())
            {
                ml=max(ml,prices[i]-st.top());
            }
        }
        return ml;
    }
};
