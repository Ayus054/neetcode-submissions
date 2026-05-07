class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ltr;
        vector<int>rtl;
        vector<int>pr;
        int p=1;
        for(auto it:nums)
        {
            p*=it;
            ltr.push_back(p);
        }p=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            p*=nums[i];
            rtl.push_back(p);
        }
        reverse(rtl.begin(),rtl.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            pr.push_back(rtl[i+1]);
            else if(i==nums.size()-1)
            pr.push_back(ltr[i-1]);
            else
            pr.push_back(ltr[i-1]*rtl[i+1]);
        }
        return pr;
    }
};
