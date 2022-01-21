class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin() , sat.end());
        vector<vector<int>> dp(501, vector<int>(501, -1));
        return recur(sat, 0, 1, dp);
    }
    
    int recur(vector<int>& sat, int n, int t, vector<vector<int>>& dp){
        if(n >= sat.size()) return 0;
        
        if(dp[n][t] != -1) return dp[n][t];
        // incl or excl
        return dp[n][t] = max(recur(sat, n + 1, t, dp), sat[n] * t + recur(sat, n + 1, t + 1, dp));
    }
};