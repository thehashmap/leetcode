// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int n){
        // code here
        vector<int> dp(n + 1);
        dp[0] = dp[1] = 1;
        for(int i = 2;i<=n/2;i++){
            dp[i] = 0;
            for(int j = 0;j<i;j++){
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }
        return dp[n/2];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends