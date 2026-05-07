class Solution {
public:
    int mc(vector<int>&cost,int n)
    {
        if(n<=1)
        return 0;

        return min(cost[n-1]+mc(cost,n-1),cost[n-2]+mc(cost,n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int size=cost.size();
        return mc(cost,size);
    }
};
