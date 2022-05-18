class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 1: Count the number of 0s, 1s and 2s and place them accordingly
        // Two iterations required
        
        // Three pointers
        int start = 0, mid = 0, end = nums.size() - 1;
        while(mid <= end){
            if(nums[mid] == 2){
                swap(nums[mid], nums[end--]);
            }
            else if(nums[mid] == 0){
                swap(nums[mid++], nums[start++]);
            }
            else if(nums[mid] == 1) mid++;
        }
    }
};