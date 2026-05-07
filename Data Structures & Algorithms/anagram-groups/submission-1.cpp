class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++)
        {
            string key=strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for(auto el:mp)
        {
            v.push_back(el.second);
        }
        return v;
    }
};
