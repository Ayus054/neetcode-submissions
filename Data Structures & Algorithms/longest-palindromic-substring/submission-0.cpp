class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int mlen=0;
        string st;
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=i+diff ; j<n ; i++,j++)
            {
                if(i==j)
                {
                    dp[i][j]=1;
                }
                else if(diff==1 && s[i]==s[j])
                {
                    dp[i][j]=2;
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                    {
                        dp[i][j]=dp[i+1][j-1]+2;
                    }
                }
                if(dp[i][j])
                {
                    mlen=j-i+1;
                    st=s.substr(i,mlen);
                }
            }
        }
        return st;
        
    }
};
