class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        vector<int>result;
        int in=0;
        for(auto x:prerequisites)
        {
            int u=x[0];
            int v=x[1];
            adj[v].push_back(u);
            indegree[u]++;
            in++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            result.push_back(f);
            for(auto x:adj[f])
            {
                indegree[x]--;
                in--;
                if(indegree[x]==0)
                q.push(x);
            }
        }
        if(in==0)
        return result;
        else 
        return {};
    }
};
