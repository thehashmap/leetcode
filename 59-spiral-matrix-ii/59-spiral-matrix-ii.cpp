class Solution {
public:
    vector<vector<int>> generateMatrix(int a) {
        vector<vector<int>> ans(a , vector<int>(a));
        int k = 0 , m = a - 1 , l = 0 , n = a - 1;
        int cnt = 1;
        while(k <= m && l <= n && cnt <= a*a){
            for(int i = l;i<= n;i++){
                ans[k][i] = cnt;
                cnt++;
            }
            k++;
            for(int i = k;i<=m;i++){
                ans[i][n] = cnt;
                cnt++;
            }
            n--;
            if(k <= m){
                for(int i = n;i>=l;i--){
                    ans[m][i] = cnt;
                    cnt++;
                }
                m--;
            }
            if(l <= n){
                for(int i = m;i>=k;i--){
                    ans[i][l] = cnt;
                    cnt++;
                }
                l++;
            }
        }
        return ans;
    }
};