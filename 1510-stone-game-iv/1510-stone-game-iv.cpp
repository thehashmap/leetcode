class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<int> dp(n + 1, false);
        return solve(n, dp);
    }
    
    bool solve(int n, vector<int>& dp) {
        if(n == 0) return false;
        if(n == 1) return true;
        if(dp[n]) return dp[n];
        for(int k = 1;k*k <= n;k++){
            if(!solve(n - k*k, dp)) return dp[n] = true;
        }
        return dp[n] = false;
    }
};