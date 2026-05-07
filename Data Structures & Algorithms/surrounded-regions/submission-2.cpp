class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<c;i++)
        {
            if(board[0][i]=='O')
            {
                q.push({0,i});
                board[0][i]='t';
            }
        }
        for(int i=0;i<c;i++)
        {
            if(board[r-1][i]=='O')
            {
                q.push({r-1,i});
                board[r-1][i]='t';
            }
        }
        for(int i=1;i<r-1;i++)
        {
            if(board[i][0]=='O')
            {
                q.push({i,0});
                board[i][0]='t';
            }
        }
        for(int i=1;i<r-1;i++)
        {
            if(board[i][c-1]=='O')
            {
                q.push({i,c-1});
                board[i][c-1]='t';
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
                for(int i=0;i<4;i++)
                {
                    int nx=x+ro[i];
                    int ny=y+co[i];
                    if(nx>=0 && ny>=0 && nx<r && ny<c && board[nx][ny]=='O')
                    {
                        q.push({nx,ny});
                        board[nx][ny]='t';
                    }
                }
            }
        }

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]=='O')
                board[i][j]='X';
                if(board[i][j]=='t')
                board[i][j]='O';
            }
        }
        
    }
};
