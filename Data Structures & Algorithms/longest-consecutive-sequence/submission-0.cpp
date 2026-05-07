class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>um;
        int lcs=0;
        int cs=0;
        for(int el:nums)
        {
            um[el]++;
        }
        for(auto el:um){
            int e=el.first;
            if(um.find(e-1)!=um.end())
            {
                continue;
            }
            else
            {
                cs=1;
                while(um.find(e+1)!=um.end())
                {
                    e=e+1;
                    cs+=1;
                }
                lcs=max(lcs,cs);
            }
            
        }

        return lcs;
    }
};
