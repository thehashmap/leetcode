class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> pSum;
        pSum.push_back(0);
        int sum = 0;
        for(auto a : nums){
            sum += a;
            pSum.push_back(sum);
        }
        int low = 1, high = n, ans = INT_MAX;
        for(int i = n; i >= 0 && pSum[i] >= target; i--){
            int toFind = pSum[i] - target;
            int bound = upper_bound(pSum.begin(),pSum.end(),toFind) - pSum.begin();
            ans = min(ans, i - bound + 1);
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};