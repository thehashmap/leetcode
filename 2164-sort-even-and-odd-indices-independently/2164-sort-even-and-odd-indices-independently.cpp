class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(i%2) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        reverse(odd.begin(), odd.end());
        int j = 0, k = 0;
        for(int i = 0;i<n;i++){
            if(i%2) nums[i] = odd[j++];
            else nums[i] = even[k++];
        }
        return nums;
    }
};