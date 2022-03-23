class Solution {
public:
    int halveArray(vector<int>& nums) {
        double total = 0, newTotal = 0;
        priority_queue<double> pq;
        for(auto n : nums){
            total += n;
            pq.push(n);
        }
        newTotal = total;
        int ans = 0;
        while(pq.size() && 2 * newTotal > total){
            double t = pq.top();
            pq.pop();
            double half = t / 2;
            t -= half;
            newTotal -= half;
            pq.push(t);
            ans++;
        }
        return ans;
    }
};