class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          unordered_map<string,int>um;
          for(int i=0;i<9;i++)
          {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                string row=string(1,board[i][j])+"row"+to_string(i);
                string column=string(1,board[i][j])+"column"+to_string(j);
                string box=string(1,board[i][j])+"box"+to_string(i/3)+"_"+to_string(j/3);

                if(um.find(row)!=um.end() || um.find(column)!=um.end() || um.find(box)!=um.end())
                return false;

                um[row]++;
                um[column]++;
                um[box]++;
            }
          }  
          return true;
    }
};
