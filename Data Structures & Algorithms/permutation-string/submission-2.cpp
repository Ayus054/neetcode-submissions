class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int>v1(26,0);
       vector<int>v2(26,0);
       for(auto it:s1)
       {
            v1[it-'a']++;
       }
       int i=0,j=0;
       int k=s1.size();
       for(int i=0;i<k;i++)
       {
            v2[s2[i]-'a']++;
       }
       if(v1==v2)
       return true;
       for(int i=k;i<s2.size();i++)
       {
            v2[s2[i]-'a']++;
            v2[s2[i-k]-'a']--;

            if(v1==v2)
            return true;
       }
       return false;
    }
};
