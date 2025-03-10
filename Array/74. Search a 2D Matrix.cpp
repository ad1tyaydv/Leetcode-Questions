class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int  col = matrix[0].size();

        int start = 0, end = col - 1;

        while(start < row && end >= 0) {
            if(matrix[start][end] > target) {
                end--;
            }
            else if(matrix[start][end] < target) {
                start++;
            }
            else {
                return true;
            }
        }

        return false;
    }
};
