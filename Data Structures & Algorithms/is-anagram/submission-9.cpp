class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map<char,int>um;
     for(auto it:s)
     {
        um[it]++;
     }
     for(auto it:t)
     {
        if(um.find(it)==um.end())
        {
            return false;
        }
        um[it]--;
     }
     for(auto it:um)
     {
        if(it.second>0 || it.second<0)
        return false;
     }
     return true;
    }
};
