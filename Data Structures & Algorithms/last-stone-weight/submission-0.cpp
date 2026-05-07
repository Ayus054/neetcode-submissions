class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        int sum=0;
        for(int v:stones)
        {
            q.push(v);
        }
        while(q.size()>1)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            sum=a-b;
            q.push(sum);
        }
        if(q.size()==1)
        return q.top();
        else
        return sum;
    }
};
