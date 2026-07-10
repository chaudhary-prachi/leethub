class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        // int r=0,c=n-1;
        // while(r<m && c>=0){
        //     if(target==matrix[r][c]){
        //         return true;
        //     }
        //     else if(target< matrix[r][c]){
        //         c--;
        //     }
        //     else{
        //         r++;
        //     }
        // }
        // return false;

        int row=0,col=n-1;
        while(row<m && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target)col--;
            else{
                row++;
            }
        }

        return false;
        
    }
};