class Solution {
public:
    int longestConsecutive(vector<int>& nums)
     {
        int longest=0;
        unordered_map<int,bool>um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]=true;
        }
        for(int it:nums)
        {
            if(um.find(it-1)!=um.end())
            continue;
            int count=1;
            int k=it;
            while(um.find(k+1)!=um.end())
            {
                    count++;
                    k++;
            }
            longest=max(longest,count);
        }
        return longest;
        }
        
};
