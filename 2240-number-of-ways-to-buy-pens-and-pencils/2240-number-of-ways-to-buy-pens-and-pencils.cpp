class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        // cost1 * x + cost2 * y = total
        long long ans = 0;
        for(long long i = 0;i <= total / cost1; i++){
            int cost = total - (i * cost1);
            ans += (cost / cost2) + 1;
            // cout << i << " " << cost << " " << cost / cost2 << endl;
        }
        return ans;
    }
};