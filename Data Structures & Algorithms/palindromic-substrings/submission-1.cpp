class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        int n=s.size();
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=i+diff;j<n;i++,j++)
            {
                if(i==j)
                dp[i][j]=1;
                else if(diff==1 && s[i]==s[j])
                dp[i][j]=1;
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                    dp[i][j]=1;
                }
                if(dp[i][j])
                c++;
            }
        }
        return c;
    }
};
