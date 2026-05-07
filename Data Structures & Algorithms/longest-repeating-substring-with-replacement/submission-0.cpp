class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>um;
        int left=0,right=0;
        int cl=0;
        int mf=0;
        int result=0;
        while(left<=right && right<s.size())
        {
            um[s[right]]++;
            mf=max(mf,um[s[right]]);
            cl=right-left+1;
            if(cl-mf<=k)
            {
                result=max(result,cl);
                right++;
            }
            else
            {
                um[s[left]]--;
                mf=max(mf,um[s[left]]);
                left++;
                cl=right-left+1;
                result=max(result,cl);
                right++;
            }
        }
        return result;
    }
};
