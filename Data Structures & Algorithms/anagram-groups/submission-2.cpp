class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++)
        {
            string sorted=strs[i];
            sort(sorted.begin(),sorted.end());
            um[sorted].push_back(strs[i]);
        }
        for(auto f:um)
        {
            v.push_back(f.second);
        }
        return v;
    }
};
