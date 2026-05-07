class Solution {
public:
    int trap(vector<int>& h) 
    {
        vector<int>ltr;
        vector<int>rtl;
        for(int i=0;i<h.size();i++)
        {
            if(i==0)
            ltr.push_back(h[i]);
            else if(i>0 && h[i]==ltr[i-1])
            ltr.push_back(h[i]);
            else if(i>0 && h[i]>ltr[i-1])
            ltr.push_back(h[i]);
            else if(i>0 && h[i]<ltr[i-1])
            ltr.push_back(ltr[i-1]);
        }
        
        for(int i=h.size()-1;i>=0;i--)
        {
            if(i==h.size()-1)
            rtl.push_back(h[i]);
            else if( i<h.size()-1 && h[i]==rtl[h.size()-1-i-1])
            rtl.push_back(h[i]);
            else if( i<h.size()-1 && h[i]>rtl[h.size()-1-i-1])
            rtl.push_back(h[i]);
            else if( i<h.size()-1 && h[i]<rtl[h.size()-1-i-1])
            rtl.push_back(rtl[h.size()-1-i-1]);
        }
        reverse(rtl.begin(),rtl.end());
        int sum=0;
        for(int i=0;i<h.size();i++)
        {
            int a=min(ltr[i],rtl[i]);
            sum=sum+(a-h[i]);
        }
        return sum;
    }
};
