class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto it:mp)
        {
            int num=it.first;
            int freq=it.second;
            bucket[freq].push_back(num);
        }
        vector<int>v;
        for(int i=nums.size();i>=0;i--)
        {
            if(bucket[i].size()==0)
            continue;
            while(bucket[i].size()>0 && k>0)
            {
                v.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return v;
    }
};
