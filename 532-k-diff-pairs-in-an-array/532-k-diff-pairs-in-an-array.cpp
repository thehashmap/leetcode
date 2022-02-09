class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto n: nums){
            mp[n]++;
        }
        int ans = 0;
        for(auto p : mp){
            if ((!k && p.second > 1) || (k && mp.count(p.first + k))) ++ans;
        }
        return ans;
    }
};