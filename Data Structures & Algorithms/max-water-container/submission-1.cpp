class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        int ml=0;
        while(i<j)
        {
            int r=min(a[i],a[j])*(j-i);
            ml=max(ml,r);
            if(a[i]<=a[j])
            i++;
            else
            j--;
        }
        return ml;
    }
};
