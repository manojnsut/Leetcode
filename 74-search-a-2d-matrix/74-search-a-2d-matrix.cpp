class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
    if (matrix.size() == 0 || matrix[0].size() == 0)
        return false;
    int R=matrix.size(),C=matrix[0].size();
    if(x<matrix[0][0] || x>matrix[R-1][C-1])
        return false;
    int row=0,col=C-1;
    while(row<R && col>=0){
        if(matrix[row][col]==x)
            return true;
        if(matrix[row][col]>x)
            col--;
        else
           row++;
    }
     return false; 
    }
};