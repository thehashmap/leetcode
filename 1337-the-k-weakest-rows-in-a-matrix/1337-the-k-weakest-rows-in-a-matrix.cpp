class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> ans;
        int n = mat.size(), m = mat[0].size();
        for(int i = 0;i<n; i++){
            int cnt = 0;
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 1) cnt++;
            }
            // cout<< cnt << i << "#" << endl;
            // cnt *= -1;
            pq.push(make_pair(cnt,i));
        }
        while(k--){
            // cout << pq.top().first << "$" << endl;
            int top = abs(pq.top().second);
            pq.pop();
            ans.push_back(top);
        }
        return ans;
    }
};