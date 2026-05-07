class Solution {
public:
    bool t(vector<vector<char>>& board,int sr,int er,int sc,int ec)
    {
        unordered_map<int,int>g;
        for(int i=sr;i<=er;i++)
        {
            for(int j=sc;j<=ec;j++)
            {
                if(g.find(board[i][j])!=g.end())
                return false;
                if(board[i][j]!='.')
                g[board[i][j]]++;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int>r;
            for(int j=0;j<9;j++)
            {
                if(r.find(board[i][j])!=r.end())
                return false;
                if(board[i][j]!='.')
                r[board[i][j]]++;
            }
        }
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int>c;
            for(int j=0;j<9;j++)
            {
                if(c.find(board[j][i])!=c.end())
                return false;
                if(board[j][i]!='.')
                c[board[j][i]]++;
            }
        }
        int er,ec;
        for(int sr=0;sr<9;sr+=3)
        {   er=sr+2;
            for(int sc=0;sc<9;sc+=3)
            {   ec=sc+2;
                if(!t(board,sr,er,sc,ec))return false;
            }
        }
        return true;
    }
};
