class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0;
        int right=nums.size()-1;
        int m=INT_MAX;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[left]<=nums[mid])
            {
                m=min(m,nums[left]);
                left=mid+1;
            }
            else
            {
                m=min(m,nums[mid]);
                right=mid-1;
            }
        }
        return m;
    }
};
