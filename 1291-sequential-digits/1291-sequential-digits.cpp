class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        queue<int> q;
        for(int i = 1;i<=9;i++) q.push(i);
        while(!q.empty()){
            int f = q.front();
            q.pop();
            if(f >= low && f <= high) ans.push_back(f);
            if(f > high) break;
            int n = f % 10;
            if(n < 9) q.push(f * 10 + n + 1);
        }
        return ans;
    }
};