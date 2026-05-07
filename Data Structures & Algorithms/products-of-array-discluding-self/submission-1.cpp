class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(nums.size(),1);
        int mul=1;
        //for left
        for(int i=0;i<nums.size();i++)
        {
            v[i]=mul;
            mul*=nums[i];
        }
        mul=1;
        //for right
        for(int i=nums.size()-1;i>=0;i--)
        {
            v[i]*=mul;
            mul*=nums[i];
        }
        return v;
    }
};
