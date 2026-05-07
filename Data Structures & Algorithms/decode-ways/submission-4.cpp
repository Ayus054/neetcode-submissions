class Solution {
public:
   /* int so(string s,int i,int n,vector<int>&dp)
    {
        if(i==n)
        return 1;
        if(s[i]=='0')
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int result=so(s,i+1,n,dp);
        if(i+1<n)
        {
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))
                result+=so(s,i+2,n,dp);
        }
        return dp[i]=result;
    }
    */
    int numDecodings(string s) 
    {
        int n=s.size();
        vector<int>dp(n,0);
        dp[n]=1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            dp[i]=0;
            else
            {
            dp[i]=dp[i+1];
            if(i+1<n)
            {
                if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))
                    dp[i]+=dp[i+2];
            }
            }
        }
        return dp[0];
    }
};
