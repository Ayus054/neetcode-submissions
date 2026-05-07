class Solution {
public:
    void ni(vector<vector<char>>& grid,int r,int c,int row,int column)
    {
        if(r<0 || c<0 || r>=row || c>=column || grid[r][c]=='0')
        return;
        grid[r][c]='0';
        ni(grid,r-1,c,row,column);
        ni(grid,r+1,c,row,column);
        ni(grid,r,c-1,row,column);
        ni(grid,r,c+1,row,column);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    ni(grid,i,j,r,c);
                }
            }
        }
        return count;
    }
};
