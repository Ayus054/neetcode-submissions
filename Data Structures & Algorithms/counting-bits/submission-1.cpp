class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>r(n+1);
        r[0]=0;
        for(int i=1;i<=n;i++)
        {
                r[i]=r[i/2]+i%2;
        }
        return r;
    }
};
