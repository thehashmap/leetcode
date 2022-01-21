class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0, sum = 0, fuel = 0, n = gas.size();
        for(int i = 0;i<n;i++){
            sum += (gas[i] - cost[i]);
            fuel += (gas[i] - cost[i]);
            if(fuel < 0){
                fuel = 0;
                ans = (i + 1);
            }
        }
        if(sum >= 0) return ans % n;
        return -1;
    }
};