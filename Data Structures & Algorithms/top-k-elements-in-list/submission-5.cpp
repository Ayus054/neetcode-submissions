class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int>m;
        priority_queue<pair<int,int>>q;
        vector<int>v;
       for(auto it :nums)
       {
            m[it]++;
       }
       for(auto it:m)
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
