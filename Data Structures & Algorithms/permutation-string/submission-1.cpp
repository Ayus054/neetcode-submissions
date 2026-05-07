class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        unordered_map<char,int>um;
        unordered_map<char,int>um2;
        for(auto el:s1)
        {
            um[el]++;
        }
        int left=0,right=0;
        while(right<s2.size())
        {
            um2[s2[right]]++;
            if(right-left+1==s1.size())
            {
                if(um2==um)
                return true;
                else{
                    um2[s2[left]]--;
                    if(um2[s2[left]]==0)
                    um2.erase(s2[left]);
                    left++;
                }
            }
            right++;
        }
        return false;
    }
};
