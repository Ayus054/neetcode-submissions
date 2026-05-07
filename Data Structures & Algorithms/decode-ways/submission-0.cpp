class Solution {
public:
    int so(string s,int i,int n)
    {
        if(i==n)
        return 1;
        if(s[i]=='0')
        return 0;

        int result=so(s,i+1,n);
        if(i+1<n)
        {
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))
                result+=so(s,i+2,n);
        }

        return result;
    }
    int numDecodings(string s) {
        int n=s.size();
        int i=so(s,0,n);
        return i;
    }
};
