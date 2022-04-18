class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = 0;
        if(nums.size() == 1) return nums[0];
        sort(nums.begin(),nums.end());
        auto it = lower_bound(nums.begin(),nums.end(),0);
        if(it == nums.end()) return *(--it);
        if(*it == 0) return 0;
        if(it == nums.begin()) return *it;
        if(abs(0 - *(it - 1)) < abs(0 - *it)) return *(--it);
        return *it;
    }
};