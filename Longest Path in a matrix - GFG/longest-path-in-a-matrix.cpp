// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int n,int m,vector<vector<int>>& matrix,int prev)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        
        int left=0,right=0,up=0,down=0;
        
        if(i-1>=0 && matrix[i-1][j]>prev)
        left=1+solve(i-1,j,n,m,matrix,matrix[i-1][j]);
        
        if(i+1<n && matrix[i+1][j]>prev)
        right=1+solve(i+1,j,n,m,matrix,matrix[i+1][j]);
        
        if(j-1>=0 && matrix[i][j-1]>prev)
        up=1+solve(i,j-1,n,m,matrix,matrix[i][j-1]);
        
        if(j+1<m && matrix[i][j+1]>prev)
        down=1+solve(i,j+1,n,m,matrix,matrix[i][j+1]);
        
        return dp[i][j]=max(left,max(right,max(up,down)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                dp[i][j]=-1;
            }
        }
        int res=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                res=max(res,solve(i,j,n,m,matrix,matrix[i][j]));
            }
        }
        return res+1;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends