class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pr=1;
        int pl=1;
        int mlen=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                pl=1;
            }
            if(nums[n-i-1]==0)
            {
                pr=1;
            }
            pr*=nums[i];
            pl*=nums[n-i-1];

            mlen=max(mlen,max(pr,pl));
        }
        return mlen;
    }
};
