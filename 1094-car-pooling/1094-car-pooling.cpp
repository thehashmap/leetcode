class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        // vector<pair<int,int>> start , finish;
        // for(auto trip : trips){
        //     start.push_back({trip[1] , trip[0]});
        //     finish.push_back({trip[2] , trip[0]});
        // }
        // sort(start.begin() , start.end());
        // sort(finish.begin() , finish.end());
        // int i = 0 , j = 0;
        // int curr = capacity;
        // while(i < trips.size() && j < trips.size()){
        //     if(start[i].first < finish[j].first){
        //         curr -= start[i].second;
        //         i++;
        //     }
        //     else {
        //         curr += finish[j].second;
        //         j++;
        //     }
        //     if(curr < 0 || curr > capacity) return false;
        // }
        // while(i < trips.size()){
        //     curr -= start[i].second;
        //     i++;
        // }
        // while(j < trips.size()){
        //     curr += finish[j].second;
        //     j++;
        // }
        // return curr == capacity;
        
        map<int, int> m;
        for (auto &t : trips)
            m[t[1]] += t[0], m[t[2]] -= t[0];
        for (auto &v : m)
            if ((capacity -= v.second) < 0)
                return false;
        return true;

    }
};