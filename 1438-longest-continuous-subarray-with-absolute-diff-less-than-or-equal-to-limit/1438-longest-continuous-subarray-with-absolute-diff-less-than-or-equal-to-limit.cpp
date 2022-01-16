class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> ms;
        int ans = 0, start = 0, end = 0, maxi = 0, mini = 0;
        while(end < nums.size()){
            ms.insert(nums[end]);
            maxi = *ms.rbegin();
            mini = *ms.begin();
            if(abs(maxi - mini) > limit){
                ms.erase(ms.find(nums[start]));
                start++;
            }
            end++;
            ans = max(ans , end - start);
        }
        return ans;
    }
};