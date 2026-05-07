class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        priority_queue<pair<int,int>>q;
        vector<int>v;
        for(auto it:nums)
        {
            um[it]++;
        }
        for(auto it:um)
        {
            q.push({it.second,it.first});
        }
        while(k--)
        {
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};
