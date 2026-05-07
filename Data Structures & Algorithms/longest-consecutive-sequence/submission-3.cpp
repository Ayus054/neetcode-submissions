class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_map<int,int>mp;
        for(auto x:nums)
        mp[x]=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            int m=0;
            int r=nums[i];
            int l=nums[i];
            while(mp.find(r+1)!=mp.end() && mp[r+1]==0)
            {
                m++;
                r=r+1;
                mp[r]=1;
            }
            while(mp.find(l-1)!=mp.end() && mp[l-1]==0)
            {
                m++;
                l=l-1;
                mp[l]=1;
            }
            maxi=max(maxi,m);
        }
        return maxi+1;
    }
};
