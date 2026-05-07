class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int r=1;
        int l=1;
        vector<int>v;
        int prev;
        for(int i=0;i<nums.size();i++)
        {
            
            if(i==0)
            {
                v.push_back(1);
                prev=nums[i];
                continue;
            }
            r=r*prev;
            v.push_back(r);
            prev=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==nums.size()-1)
            {
                prev=nums[i];
                continue;
            }
            l=l*prev;
            v[i]*=l;
            prev=nums[i];
        }
        return v;
    }
};
