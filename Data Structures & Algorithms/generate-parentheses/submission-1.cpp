class Solution {
public:
    
    void g(vector<string>&v,int op,int cp,string s)
    {
        if(op==0 && cp==0)
        {
            v.push_back(s);
            s="";
            return ;
        }

        if(op>0)
        {
            g(v,op-1,cp,s+'(');
        }
        if(cp>op)
        {
            g(v,op,cp-1,s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        g(v,n,n,"");
        return v;
     }
};
