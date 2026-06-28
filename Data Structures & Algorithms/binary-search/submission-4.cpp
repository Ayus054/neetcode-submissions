class Solution {
public:
    int bs(vector<int>&n,int target,int i,int j)
    {
        if(i>j)
        return -1;
        int mid=(i+j)/2;
        if(n[mid]==target)
        return mid;
        else if(n[mid]<target)
        return bs(n,target,mid+1,j);
        else
        return bs(n,target,i,mid-1);
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
    }
};
