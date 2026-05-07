class Solution {
public:
    void solve(int idx,string temp,string digits,vector<string>&result,unordered_map<char,string>mp)
    {
        if(idx==digits.length())
        {
            result.push_back(temp);
            return;
        }
        for(int i=0;i<mp[digits[idx]].size();i++)
        {
            temp+=mp[digits[idx]][i];
            solve(idx+1,temp,digits,result,mp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
        return {};
        vector<string>result;
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp="";
        solve(0,temp,digits,result,mp);
        return result;
    }
};
