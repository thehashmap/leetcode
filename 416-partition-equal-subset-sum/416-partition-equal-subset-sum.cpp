class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2) return false;
        int target = sum / 2;
        vector<vector<bool>> dp(n + 1, vector<bool> (target + 1, false));
        for(int i = 0;i<n+1;i++) dp[i][0] = true;
        for(int i = 1;i<n + 1;i++){
            for(int j = 1;j<target + 1;j++){
                if(nums[i - 1] <= j){
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
                }
                else dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][target];
    }
    
    
};