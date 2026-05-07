class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size())
        return "";
        int ml=INT_MAX,start=0;
        unordered_map<char,int>um,um2;
        for(auto el:t)
        {
            um[el]++;
        }
        int right=0,left=0;
        int u=um.size();
        int cu=0;
        while(right<s.size())
        {
            um2[s[right]]++;
            if(um.count(s[right]) && um2[s[right]]==um[s[right]])
            cu++;

            while(left<=right && u==cu){

                if(ml>right-left+1)
                {
                    ml=right-left+1;
                    start=left;
                }

                um2[s[left]]--;

                if(um.count(s[left]) && um2[s[left]]<um[s[left]])
                cu--;

                left++;
            }
            right++;
        }
        return ml==INT_MAX?"":s.substr(start,ml);
    }
};
