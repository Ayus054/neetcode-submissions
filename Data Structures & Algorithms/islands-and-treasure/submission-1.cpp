class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==0)
                q.push({i,j});
            }
        }
        int ro[]={-1,1,0,0};
        int co[]={0,0,1,-1};
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                auto [x,y]=q.front();
                q.pop();
                for(int k=0;k<4;k++)
                {
                    int ni=x+ro[k];
                    int nj=y+co[k];
                    if(ni>=0 && nj>=0 && ni<r && nj<c && grid[ni][nj]==2147483647)
                    {
                        grid[ni][nj]=grid[x][y]+1;
                        q.push({ni,nj});
                    }
                }
            }
        }
    }
};
