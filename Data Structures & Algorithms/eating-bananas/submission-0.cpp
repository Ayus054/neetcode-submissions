class Solution {
public:
    int maxEl(vector<int>& piles)
    {
        int m=INT_MIN;
        for(int el:piles)
        {
            m=max(m,el);
        }
        return m;
    }
    int total(vector<int>&piles,int mid)
    {
        int t=0;
        for(int el:piles)
        {
            t+=ceil(el/(double)mid);
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=maxEl(piles);
        while(left<=right)
        {
            int mid=(left+right)/2;
            int th=total(piles,mid);
            
            if(th<=h)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};
