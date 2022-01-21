class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(201, vector<int>(201, -1));
        return solve(grid, grid.size() - 1, grid[0].size() - 1, dp);
    }
    
    int solve(vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){
        if(m < 0 || n < 0) return INT_MAX;
        if(m == 0 && n == 0) return grid[m][n];
        if(dp[m][n] != -1) return dp[m][n];
        int up = solve(grid, m - 1, n, dp);
        int left = solve(grid, m , n - 1, dp);
        return dp[m][n] = grid[m][n] + min(up, left);
    }
};