class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int m = Grid.size(), n = Grid[0].size();
        vector<vector<int>> dp(m , vector<int> (n , -1));
        return path(Grid, m - 1, n - 1, dp);
    }
    
    int path(vector<vector<int>>& Grid, int m, int n, vector<vector<int>>& dp) {
        if(m < 0 || n < 0 || Grid[m][n] == 1) return 0;
        if(m == 0 && n == 0) return 1;
        if(dp[m][n] != -1) return dp[m][n];
        int up = path(Grid, m - 1, n , dp);
        int left = path(Grid, m , n - 1, dp);
        return dp[m][n] = up + left;
    }
};