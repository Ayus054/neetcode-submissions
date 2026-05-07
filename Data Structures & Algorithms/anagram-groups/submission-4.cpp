class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>um;
       vector<vector<string>>v;
       for(string it:strs)
       {
            string t=it;
            sort(t.begin(),t.end());
            um[t].push_back(it);
       }
       for(auto it:um)
       {
        v.push_back(it.second);
       }
       return v;

    }
};
