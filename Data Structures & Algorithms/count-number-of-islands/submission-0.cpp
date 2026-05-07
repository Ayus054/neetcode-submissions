class Solution {
public:
    int row[4]={0,0,-1,1};
    int col[4]={-1,1,0,0};
    int r;
    int c;
    bool valid(int i,int j)
    {
        return i>=0&&i<r&&j>=0&&j<c;
    }
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int,int>>q;
        int count=0;
        r=grid.size();
        c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    grid[i][j]='0';
                    q.push(make_pair(i,j));
                    count++;
                    while(!q.empty())
                    {
                        int new_i=q.front().first;
                        int new_j=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            if(valid(new_i+row[k],new_j+col[k]) && grid[new_i+row[k]][new_j+col[k]]=='1')
                            {
                                grid[new_i+row[k]][new_j+col[k]]='0';
                                q.push(make_pair(new_i+row[k],new_j+col[k]));

                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
