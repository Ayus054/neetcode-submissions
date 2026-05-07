class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>map(26,0);
        priority_queue<int>pq;
        int time=0;
        for(char &ch:tasks)
        {
            map[ch-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(map[i]>0)
            pq.push(map[i]);
        }
        while(!pq.empty())
        {
            vector<int>v;
            for(int i=1;i<=n+1;i++)
            {
                if(!pq.empty())
                {
                    int freq=pq.top();
                    freq--;
                    pq.pop();
                    v.push_back(freq);
                }
            }
            for(int &i:v)
            {
                if(i>0)
                {
                    pq.push(i);
                }
            }
            if(pq.empty())
            {
                time+=v.size();
            }
            else
            {
                time+=n+1;
            }
        }
        return time;
    }
};
