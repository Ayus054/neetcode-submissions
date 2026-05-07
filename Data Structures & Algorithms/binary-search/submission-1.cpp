class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size()-1;
        int left=0;
        int right=size;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]==target)
            return mid;
            else if(target>nums[mid])
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }

        }
        return -1;
    }
};
