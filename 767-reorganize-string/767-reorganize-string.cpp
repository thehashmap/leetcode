class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(auto c : s){
            mp[c]++;
            if(mp[c] > (n + 1)/2) return "";
        }
        priority_queue<pair<int,char>> pq;
        for(auto m : mp){
            pq.push(make_pair(m.second,m.first));
        }
        string ans = "";
        while(pq.size() > 1){
            auto f = pq.top();pq.pop();
            auto sec = pq.top();pq.pop();
            ans += f.second;
            ans += sec.second;
            f.first--;
            sec.first--;
            if(f.first) pq.push(f);
            if(sec.first) pq.push(sec);
        }
        if(pq.size()){
            auto f = pq.top();
            ans += f.second;
        }
        return ans;
    }
};