class Solution {
public:
    vector<vector<int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
    int rows,columns;
    bool find(vector<vector<char>>& board,int i,int j, string word,int ind){
        if(ind==word.length())
        return true;
        if(i<0 || j<0 || i>=rows || j>=columns || board[i][j]=='@' || board[i][j]!=word[ind])
        return false;
        char temp=board[i][j];
        board[i][j]='@';
        for(auto &d:dir)
        {
            int new_i=i+d[0];
            int new_j=j+d[1];
            if(find(board,new_i,new_j,word,ind+1))
            return true;
        }
        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        rows=board.size();
        columns=board[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(board[i][j]==word[0] && find(board,i,j,word,0))
                return true;
            }
        }
        return false;
    }
};
