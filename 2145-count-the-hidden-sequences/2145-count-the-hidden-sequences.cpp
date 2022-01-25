class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        long long low = 0, high = 0, counter = 0;
        for(auto d : diff){
            counter += d;
            low = min(low , counter);
            high = max(high, counter);
        }
        return max(0LL, (upper - lower) - (high - low) + 1);
    }
};