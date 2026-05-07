class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=0;
        }
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
            int k=1;
            int num=nums[i];
            if(mp[num]==0)
            {
                mp[num]=1;
                int left=num-1;
                int right=num+1;
                while(mp.find(right)!=mp.end() && !mp[right])
                {
                    k++;
                    right+=1;
                }
                while(mp.find(left)!=mp.end() && !mp[left])
                {
                    k++;
                    left-=1;
                }
                longest=max(longest,k);
            }
            else 
            continue;
        }
        return longest;
    }
};
