class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for (int r = 0, c = 0; r < n && c < n; r++, c++)
            sum += mat[r][c];
        
        for (int r = 0, c = n - 1; r < n && c >= 0; r++, c--) {
            if (r != c)
                sum += mat[r][c];
        }
        
        return sum;
    }
};