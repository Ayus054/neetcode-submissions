class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_map<int,int>um;
       int ml=0;
       for(int i=0;i<nums.size();i++)
       {
            um[nums[i]]=i;
       }
       int cl=0;
       for(auto it:um)
       {
        int i=it.first;
        if(um.find(i-1)!=um.end())
        continue;
        else
        {
            cl=1;
        while(um.find(i+1)!=um.end())
        {
            cl++;
            i++;
        }
        ml=max(cl,ml);
        }
       }
       return ml;
    }
};
