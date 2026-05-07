class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        vector<pair<int,int>>direction={{-1,0},{1,0},{0,-1},{0,1}};
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==0)
                q.push({i,j});
            }  
        }

        while(!q.empty())
        {
            auto current=q.front();
            int i=current.first;
            int j=current.second;
            q.pop();
            for(auto &k:direction)
            {
                int ni=i+k.first;
                int nj=j+k.second;
                if(ni>=0 && ni<r && nj>=0 && nj<c && grid[ni][nj]==2147483647)
                {
                    grid[ni][nj]=grid[i][j]+1;
                    q.push({ni,nj});
                }
            }
        }

    }
};
