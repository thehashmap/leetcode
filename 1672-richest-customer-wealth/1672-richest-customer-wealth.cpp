class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0, wealth = 0;
        for(auto m : accounts){
            wealth = 0;
            for(auto n : m) wealth += n;
            ans = max(ans, wealth);
        }
        return ans;
    }
};