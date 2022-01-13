class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int ans = 0 , cnt = 0;
        vector<pair<int,int>> time;
        for(int i = 0;i<plantTime.size();i++){
            time.push_back({growTime[i],plantTime[i]});
        }
        sort(time.begin(), time.end());
        reverse(time.begin(), time.end());
        for(auto t : time){
            ans = max(ans , cnt + t.second + t.first);
            cnt += t.second;
        }
        return ans;
    }
};