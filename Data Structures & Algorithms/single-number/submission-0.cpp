class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r;
        for(auto it:nums)
        {
            r^=it;
        }
        return r;
    }
};
