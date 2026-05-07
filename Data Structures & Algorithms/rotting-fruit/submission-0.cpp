class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int count=0;
        int fresh=0;
        vector<pair<int,int>>direction={{-1,0},{1,0},{0,-1},{0,1}};
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                fresh++;
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }

        while(!q.empty())
        {
            int size=q.size();
            bool rottedInThisRound = false;
            for(int m=0;m<size;m++)
            {
            auto current=q.front();
            int i=current.first;
            int j=current.second;
            q.pop();
            for(auto &k:direction)
            {
                int ni=i+k.first;
                int nj=j+k.second;
                if(ni >= 0 && ni < r && nj >= 0 && nj < c && grid[ni][nj] == 1)
                {
                    grid[ni][nj]=2;
                    q.push({ni,nj});
                    fresh--;
                    rottedInThisRound = true;
                }
            }
            }
            if(rottedInThisRound == true)
            count++;
        }
        return fresh==0?count:-1;
    }
};
