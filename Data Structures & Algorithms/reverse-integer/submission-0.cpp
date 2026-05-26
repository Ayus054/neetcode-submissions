class Solution {
public:
    int reverse(int x) {
        int nn=0;
        while(x!=0)
        {
            int r=x%10;
            if((nn>INT_MAX/10)||(nn<INT_MIN/10))
            return 0;
            nn=(nn*10)+r;
            x=x/10;
        }
        return nn;
    }
};
