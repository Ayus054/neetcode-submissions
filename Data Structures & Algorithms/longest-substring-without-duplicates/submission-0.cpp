class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>um;
        int left=0,right=0;
        int m=0;
        while(left<=right && right<s.size())
        {
            if(um.find(s[right])!=um.end() && um[s[right]]>=left)
            {
                left=um[s[right]]+1;
                m=max(m,(right-left+1));
            }
            um[s[right]]=right;
            m=max(m,(right-left+1));
            right++;
        }
        return m;
    }
};
