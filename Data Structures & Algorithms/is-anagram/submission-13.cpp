class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>um;
        for(auto x:s)
        {
            um[x]++;
        }
        for(auto x:t)
        {
            if(um[x]<1)
            return false;
            um[x]--;
        }
        for(int i=0;i<um.size();i++)
        {
            if(um[i]>=1)
            return false;
        }
        return true;
    }
};
