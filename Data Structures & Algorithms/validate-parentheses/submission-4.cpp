class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>um;
        um['}']='{';
        um[']']='[';
        um[')']='(';
        stack<char>st;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='{' || s[i]=='[' ||s[i]=='(')
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                if(!st.empty() && um[s[i]]==st.top())
                {
                    st.pop();
                    i++;
                }
                else
                return false;
            }
        }
        return st.size()==0?true:false;
    }
};
