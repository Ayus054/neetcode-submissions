class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>um;
        for(auto i:t)
        {
            um[i]++;
        }
        int j=0;
        int l=INT_MAX;
        int low=0;
        int high=0;
        int k=t.size();
        for(int i=0;i<s.size();i++)
        {   
            if(um.find(s[i])!=um.end() && um[s[i]]>0)
            {
                k--;
            }
            um[s[i]]--;
            while(k==0)
            {
                if(l>(i-j+1))
                {
                    l=i-j+1;
                    low=j;
                    high=i;
                }
                um[s[j]]++;
                if(um[s[j]]>0)
                {
                    k++;
                }
                j++;
            }
        }
        return l==INT_MAX?"":s.substr(low,high-low+1);
    }
};
