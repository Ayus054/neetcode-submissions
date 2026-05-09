class Solution {
public:

    bool pal(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int ml=0;
        int st;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(pal(s,i,j))
                {
                    if(ml<j-i+1)
                    {
                        st=i;
                        ml=j-i+1;
                    }
                }
            }
        }
        return s.substr(st,ml);
    }
};
