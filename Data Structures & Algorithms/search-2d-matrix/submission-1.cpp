class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=matrix.size();
       int column=matrix[0].size();
       int left=0;
       int right=(row*column)-1;
       while(left<=right)
       {
            int mid=(left+right)/2;
            if(matrix[mid/column][mid%column]==target)
            return true;
            else if(matrix[mid/column][mid%column]>target)
            right=mid-1;
            else
            left=mid+1;
       }
       return false;
    }
};
