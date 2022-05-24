class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int ans = 0;
        priority_queue<int> pq;
        for(int i = 0;i<h.size() - 1;i++){
            int d = h[i + 1] - h[i];
            if(d > 0){
                pq.push(-d);
            }
            if(pq.size() > l){
                b += pq.top();
                pq.pop();
            }
            if(b < 0) return i;
        }
        return h.size() - 1;
    }
};