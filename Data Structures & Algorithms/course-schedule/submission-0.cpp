class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto i:prerequisites)
        {
            int u=i[0];
            int v=i[1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            for(auto i:adj[f])
            {
                indegree[i]--;
                if(indegree[i]==0)
                q.push(i);
            }
        }
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]!=0)
            return false;
        }
        return true;
    }
};
