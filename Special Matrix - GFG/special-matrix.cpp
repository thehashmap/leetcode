// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    // Code here
	    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        int mod = 1e9 + 7;
        
        for (auto &b : blocked_cells)
        	dp[b[0]][b[1]] = -1;
        	
        dp[0][1] = 1;
        	
        for (int i = 0; i < n; ++i)
        	for (int j = 0; j < m; ++j)
        		dp[i + 1][j + 1] = dp[i + 1][j + 1] == -1 
        			? 0 
        			: (dp[i][j + 1] + dp[i + 1][j]) % mod;
        
        return dp[n][m];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends