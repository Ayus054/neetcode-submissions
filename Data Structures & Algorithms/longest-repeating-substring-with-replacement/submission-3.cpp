class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        int mf=0;
        int result=0;
        vector<int>count(26,0);
        while(r<s.size())
        {
            count[s[r]-'A']++;
            mf=max(mf,count[s[r]-'A']);
            while((r-l+1)-mf>k)
            {
                count[s[l]-'A']--;
                l++;
            }
            result=max(result,r-l+1);
            r++;
        }
        return result;
    }
};
