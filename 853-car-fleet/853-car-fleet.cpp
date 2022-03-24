class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size(), dist = 0;
        int ans = 0;
        double prevTime = 0;
        map<int,double> mp;
        for(int i = 0;i<n;i++){
            mp[-position[i]] = (double)(target - position[i]) / speed[i];
        }
        for(auto it : mp){
            if(it.second > prevTime) {
                prevTime = it.second;
                ans++;
            }
        }
        return ans;
    }
};