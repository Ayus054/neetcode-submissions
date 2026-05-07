class Solution {
public:
    bool isPalindrome(int st,int e,string s)
    {
        while(st<e)
        {
            if(s[st]!=s[e])
            return false;
            st++;
            e--;
        }
        return true;
    }
    void f(string &s,vector<vector<string>>&result,int idx,vector<string>&v)
    {
        if(s.length()==idx)
        {
            result.push_back(v);
            return;
        }
        for(int i=idx;i<s.length();i++)
        {
            if(isPalindrome(idx,i,s))
            {
                v.push_back(s.substr(idx,i-idx+1));
                f(s,result,i+1,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string>v;
        f(s,result,0,v);
        return result;
    }
};
