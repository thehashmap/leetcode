class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true){
            int prev = original;
            for(auto n : nums){
                if(n == original){
                    original *= 2;
                    break;
                }
            }
            if(prev == original) break;
            prev = original;
        }
        return original;
    }
};