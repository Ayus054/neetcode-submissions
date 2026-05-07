class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        //if(edges.size()!=n-1)
        //return false;
        vector<vector<int>>adj(n);
        vector<int>visited(n,0);
        for(auto x:edges)
        {
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<pair<int,int>>q;
        q.push({0,-1});
        visited[0]=1;
        while(!q.empty())
        {
            auto [f,p]=q.front();
            q.pop();
            for(auto x:adj[f])
            {
                if(!visited[x])
                {
                    visited[x]=1;
                    q.push({x,f});
                }
                else if(x!=p)
                return false;
            }
        }
        for(int i=0;i<visited.size();i++)
        {
            if(visited[i]==0)
            return false;
        }
        return true;
    }
};
