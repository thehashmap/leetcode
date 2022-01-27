class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        vector<vector<int>> dp(201, vector<int>(201, -1));
        return solve(t, 0, 0, dp);
    }
    
    int solve(vector<vector<int>>& t, int r, int c, vector<vector<int>>& dp){
        if(r == t.size() - 1) return t[r][c];
        if(dp[r][c] != -1) return dp[r][c];
        int d = t[r][c] + solve(t, r + 1, c, dp);
        int dg = t[r][c] + solve(t, r + 1, c + 1, dp);
        return dp[r][c] = min(d, dg);
    }
};