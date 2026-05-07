class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int x:nums)
        {
            if(um.find(x)!=um.end())
            return true;
            um[x]++;
        }
        return false;
    }
};
