// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string s)
		{
		    // Code here.
		    int n = s.size(),p = 0, ans = 0;
		    for(int i = n-1;i>=0;i--){
		        ans += (pow(2, p++) * (s[i] - '0'));
		    }
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends