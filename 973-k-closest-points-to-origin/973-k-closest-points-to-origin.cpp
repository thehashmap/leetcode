class Solution {
public:
    int sqdist(vector<int>& p){
        return (p[0] * p[0] + p[1] * p[1]);
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        vector<vector<int>> ans;
        int i = 0;
        for(auto point : points){
            auto p = make_pair(sqdist(point), i++);
            pq.push(p);
            if(pq.size() > k) pq.pop();
        }
        while(pq.size()){
            auto p = pq.top();pq.pop();
            ans.push_back(points[p.second]);
        }
        return ans;
    }
};