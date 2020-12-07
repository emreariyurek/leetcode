class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>> &indices) {
        int count = 0;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < indices.size(); i++) {
            int r = indices[i][0];
            int c = indices[i][1];
            for (int j = 0; j < m; j++) {
                mat[r][j]++;
                if (mat[r][j] % 2 == 1)
                    count++;
                else
                    count--;
            }
                
            for (int j = 0; j < n; j++) {
                mat[j][c]++;
                if (mat[j][c] % 2 == 1)
                    count++;
                else
                    count--;
            }
        }
        
        return count;
    }
};