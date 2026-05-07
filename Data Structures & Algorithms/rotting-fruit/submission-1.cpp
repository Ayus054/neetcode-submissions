class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int fresh=0;
        int time=0;
        queue<pair<int,int>>q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)
                q.push({i,j});
                else if(grid[i][j]==1)
                fresh++;
            }
        }
        
        int ro[]={-1,1,0,0};
        int co[]={0,0,1,-1};
        while(!q.empty() && fresh)
        {
            int size=q.size();
            while(size--)
            {
                auto [x,y]=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int ni=x+ro[i];
                    int nj=y+co[i];
                    
                    if(ni>=0 && nj>=0 && ni<r && nj<c && grid[ni][nj]==1)
                    {
                        grid[ni][nj]=2;
                        q.push({ni,nj});
                        fresh--;
                    }
                }
            }
            time++;
        }
        return fresh==0?time:-1;
    }
};
