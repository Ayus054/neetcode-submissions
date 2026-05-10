class Solution {
public:

    bool pal(string s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    void ss(string s,int n,int index,string& res,string &cur)
    {
        if(index==n)
        return;
        cur.push_back(s[index]);
        if(pal(cur) && cur.size()>res.size())
        res=cur;
        ss(s,n,index+1,res,cur);
        cur.pop_back();

        if(cur.empty())
        {
            ss(s,n,index+1,res,cur);
        }

    }
    string longestPalindrome(string s) {
        string cur="";
        string res="";
        ss(s,s.size(),0,res,cur);
        return res;
    }
};
