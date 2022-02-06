class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mp;
        auto it = nums.begin();
        for(int i = 0;i<nums.size();i++){
            if(mp[nums[i]] >= 2) {
                nums.erase(it + i);
                i--;
            }
            else {
                mp[nums[i]]++;
                ans++;
            }
        }
        return ans;
    }
};