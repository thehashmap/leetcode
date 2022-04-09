class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto a : nums){
            mp[a]++;
        }
        for(auto p : mp){
            pq.push({p.second,p.first});
            if(pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};