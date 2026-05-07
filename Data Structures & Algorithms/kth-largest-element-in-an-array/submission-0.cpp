class Solution {
public:
struct Compare {
    bool operator()(int a, int b) {
        return a > b;  // Max heap: Higher values have higher priority
    }
};

    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, Compare> m;
        for(int i=0;i<k;i++)
        {
            m.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++)
        {
            if(nums[i]>=m.top())
            {
                m.pop();
                m.push(nums[i]);
            }
        }
        return m.top();
    }
};
