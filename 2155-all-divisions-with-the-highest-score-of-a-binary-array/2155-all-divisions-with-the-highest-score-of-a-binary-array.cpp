class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> ans;
        int score = 0, ones = 0, zeros = 0, n = nums.size();
        for(auto a : nums) if(a == 1) ones++;
        for(int i = 0;i<=n;i++){
            if(ones + zeros > score){
                score = ones + zeros;
                ans.clear();
            }
            if(ones + zeros == score) ans.push_back(i);
            if(i < n) {
                if(nums[i] == 0) zeros++;
                else ones--;
            }
        }
        return ans;
    }
};