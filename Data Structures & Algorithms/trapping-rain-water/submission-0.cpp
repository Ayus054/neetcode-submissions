class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0)
        return 0;
        int total=0,lMax=0,rMax=0;
        int left=0,right=height.size()-1;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=lMax)
                lMax=height[left];
                else
                total+=lMax-height[left];

                left++;
            }
            else
            {
                if(height[right]>=rMax)
                rMax=height[right];
                else
                total+=rMax-height[right];

                right--;
            }
        }
        return total;
    }
};
