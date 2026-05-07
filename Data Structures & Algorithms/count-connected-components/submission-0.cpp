class Solution {
public:
    void bfs(vector<vector<int>>& adj,vector<int>&visited,int i)
    {
        queue<int>q;
        visited[i]=1;
        q.push(i);
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            for(auto x:adj[f])
            {
                if(visited[x]==0)
                {
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
    } 
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto x:edges)
        {
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>visited(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                c++;
                bfs(adj,visited,i);
            }
        }
        return c;
    }
};
