class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int ans = INT_MAX, res = INT_MAX;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        for(int i = 0;i<n;i++){
            res = solve(mat, n - 1, i, dp);
            ans = min(ans, res);
        }
        return ans;
    }
    
    int solve(vector<vector<int>>& mat, int r, int c, vector<vector<int>>& dp){
        int n = mat.size();
        if(c < 0 || c >= n) return 1e9;
        if(r == 0) return mat[r][c];
        if(dp[r][c] != -1) return dp[r][c];
        int l = solve(mat, r - 1, c - 1, dp);
        int d = solve(mat, r - 1, c, dp);
        int ri = solve(mat, r - 1, c + 1, dp);
        return dp[r][c] = mat[r][c] + min(l , min(d , ri));
    }
};