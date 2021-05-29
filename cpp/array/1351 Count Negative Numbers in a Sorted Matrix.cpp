class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int n  = grid.size();
        for (int r = 0; r < n; r++) {
            int m = grid[r].size();
            for (int c = m - 1; c >= 0; c--) {
                if (grid[r][c] < 0)
                    ans++;
                else
                    break;
            }
        }
        
        return ans;
    }
};