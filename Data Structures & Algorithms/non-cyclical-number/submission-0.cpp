class Solution {
public:
    unordered_map<int,int>mp;
    bool isHappy(int n) 
    {
        int sum=0;
        while(n)
        {
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }
        if(sum==1)
        return true;
        else if(mp.find(sum)!=mp.end())
        return false;
        else
        {
            mp[sum]=1;
            return isHappy(sum);
        }
    }
};
