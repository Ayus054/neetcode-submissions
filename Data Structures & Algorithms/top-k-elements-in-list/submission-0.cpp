class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int el:nums)
        {
            um[el]++;
        }
        for(auto el:um)
        {
            pq.push({el.second,el.first});
        }
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
