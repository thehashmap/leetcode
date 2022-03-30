class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        long long x = (num - 3) / 3;
        long long sum = 3 * x + 3;
        if(sum == num){
            ans = {x , x + 1, x + 2};
        }
        return ans;
    }
};