class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(2 * n);
        for(int i = 0;i<n;i++){
            res[i] = res[i + n] = nums[i];
        }
        int cnt = count(nums.begin() , nums.end() , 1);
        int holes = 0 , ans = 0;
        for(int i = 0;i<cnt;i++){
            if(res[i] == 0) holes++;
        }
        ans = holes;
        for(int i = cnt;i<res.size();i++){
            if(res[i - cnt] == 0) holes --;
            if(res[i] == 0) holes++;
            ans = min(ans , holes);
        }
        return ans;
    }
};