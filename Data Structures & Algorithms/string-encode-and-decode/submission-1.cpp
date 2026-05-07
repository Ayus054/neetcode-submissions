class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++)
        {
            s+=to_string(strs[i].size())+"#"+strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>v;
        int i=0;
        while(i<s.size())
        {
            int delPos=s.find("#",i);
            int len=stoi(s.substr(i,delPos-i));
            string t=s.substr(delPos+1,len);
            v.push_back(t);
            i=delPos+1+len;
        }
        return v;
    }
};
