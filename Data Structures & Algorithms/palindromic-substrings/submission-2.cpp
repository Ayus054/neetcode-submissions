class Solution {
public:
    int ml=0;
    void p(string s,int left,int right)
    {
        while(left>=0 && right<=s.size()-1 && s[right]==s[left])
        {
            right++;
            left--;
            ml++;
        }
    }
    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++)
        {
            p(s,i,i);
            p(s,i,i+1);
        }
        return ml;
    }
};
