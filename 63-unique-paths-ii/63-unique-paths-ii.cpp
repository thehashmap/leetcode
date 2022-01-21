class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m = o.size(), n = o[0].size();
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, -1));
        return path(o, m - 1, n - 1, dp);
    }
    int path(vector<vector<int>>& o, int m, int n, vector<vector<int>>& dp){
        if(m >= 0 && n >= 0 && o[m][n] == 1) return 0;
        if(m == 0 && n == 0) return 1;
        if(m < 0 || n < 0) return 0;
        if(dp[m][n] != -1) return dp[m][n];
        int up = path(o, m - 1, n, dp);
        int left = path(o, m, n - 1, dp);
        return dp[m][n] = up + left;
    }
};