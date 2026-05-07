class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        return 0;
        unordered_map<char,int>um;
        int j=0;
        int lon=0;
        for(int i=0;i<s.size();i++)
        {
             if(um.find(s[i])!=um.end())
             {
                j=max(j,um[s[i]]+1);
                um[s[i]]=i;
             }
             um[s[i]]=i;
             lon=max(lon,i-j+1);
        }
        return lon;
    }
};
