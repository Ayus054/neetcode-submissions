class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int l=0;
        while(i<j)
        {
            int s=min(heights[i],heights[j])*(j-i);
            l=max(l,s);
            if(heights[i]<heights[j])
            i++;
            else
            j--;
        }
        return l;
    }
};
