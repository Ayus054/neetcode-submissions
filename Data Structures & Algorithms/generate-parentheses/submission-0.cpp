class Solution {
public:

    void gp( vector<string>&v,int open,int close,int max,string current)
    {
        if(current.size()==max*2)
        {
            v.push_back(current);
            return;
        }
        if(open<max)
        {
            gp(v,open+1,close,max,current+"(");
        }
        if(open>close)
        {
            gp(v,open,close+1,max,current+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        gp(v,0,0,n,"");
        return v;
    }
};
