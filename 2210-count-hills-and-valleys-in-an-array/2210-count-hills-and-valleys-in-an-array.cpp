class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0, n = nums.size();
        vector<int>v;
        v.push_back(nums[0]);
		//pushing unique elements into new vector
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
            }
        }
        for(int i = 1;i<v.size() - 1;i++){
            if(v[i] > v[i - 1] && v[i] > v[i + 1]) ans++;
            if(v[i] < v[i - 1] && v[i] < v[i + 1]) ans++;
        }
        return ans;
    }
};