class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto el:tokens)
        {
            if(el=="+"||el=="-"||el=="*"||el=="/")
            {
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(el=="+")
                st.push(a+b);
                if(el=="-")
                st.push(a-b);
                if(el=="*")
                st.push(a*b);
                if(el=="/")
                st.push(a/b);
            }
            else
            st.push(stoi(el));
        }
        return st.top();
    }
};
