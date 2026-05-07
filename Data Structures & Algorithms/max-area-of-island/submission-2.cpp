class Solution {
public:
int maxi=0;
    int dfs(vector<vector<int>>& grid,int i,int j,int r,int c)
    {
        if(i<0 || j<0||i>=r||j>=c||grid[i][j]==0)
        return 0;
        grid[i][j]=0;
        return 1+dfs(grid,i-1,j,r,c)+dfs(grid,i+1,j,r,c)+dfs(grid,i,j-1,r,c)+dfs(grid,i,j+1,r,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    maxi=max(maxi,dfs(grid,i,j,r,c));
                }
            }
        }
        return maxi;
    }
};
