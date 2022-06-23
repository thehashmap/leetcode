// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	int mod = 1000000007;
	public:
	
	int TotalWays(int n)
	{
	    // Code here
	    vector<int> dp(n + 2, 1);
	    for(int i = 2;i<=n+1;i++){
	        dp[i] = (0LL + dp[i - 1] + dp[i - 2]) % mod;    
	    }
	    
	    return (1LL*dp[n+1]*dp[n+1]) % mod ;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends