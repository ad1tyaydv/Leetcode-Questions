// Time Complexity - O(n*n)
// Space Complexity - O(1)

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        if(n == 1 && m == 1)  return true;
        if(n == 0 && m == 0 )  return true;
        
        bool check = true;
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<m-1;j++) {
                if(matrix[i][j] != matrix[i + 1][j + 1]) {
                    check = false;
                    break;
                }
            }
        }

        return check;
    }
};
