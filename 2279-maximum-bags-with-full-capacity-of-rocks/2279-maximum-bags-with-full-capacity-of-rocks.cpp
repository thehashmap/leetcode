class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans = 0, n = rocks.size();
        multiset<int> ms;
        for(int i = 0;i<n;i++){
            int d = capacity[i] - rocks[i];
            if(d == 0) ans++;
            else ms.insert(d);
        }
        int cnt = 0;
        for(auto m : ms){
            if(m <= additionalRocks){
                ans++;
                additionalRocks -= m;
            }
            else break;
        }
        return ans;
    }
};