class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, totalGas = 0, totalCost = 0, n = gas.size();
        totalGas = accumulate(gas.begin(), gas.end(), 0);
        totalCost = accumulate(cost.begin(), cost.end(), 0);
        if(totalCost > totalGas) return -1;
        totalGas = 0;
        for(int i = 0;i<n ;i++){
            totalGas += gas[i];
            if(totalGas < cost[i]){
                start = i + 1;
                totalGas = 0;
                continue;
            }
            totalGas -= cost[i];
        }
        return start == n ? 0 : start;
    }
};