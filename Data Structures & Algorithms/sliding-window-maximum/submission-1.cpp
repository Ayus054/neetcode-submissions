class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        vector<int>v;
        int right=0,left=0;
        while(right<nums.size())
        {
            maxHeap.push({nums[right],right});
            if(right-left+1==k)
            {
                while(maxHeap.top().second<left)
                {
                    maxHeap.pop();
                }
                v.push_back(maxHeap.top().first);
                left++;
            }
            right++;
        }
        return v;
    }
};
