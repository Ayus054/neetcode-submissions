class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int rc=1,lc=1;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                m=max(m,0);
                rc=1;
                continue;
            }
            rc*=nums[i];
            m=max(m,rc);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                m=max(m,0);
                lc=1;
                continue;
            }
            lc*=nums[i];
            m=max(m,lc);
        }
        return m;
    }
};
