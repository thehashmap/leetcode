// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	    int n = s.size();
	    for(int i = 1;i<n;i++){
	        if(n%i != 0) continue;
	        string t = s.substr(0,i);
	        string r;
	        for(int cnt = 0;cnt < n/i ;cnt++){
	            r += t;
	        }
	        if(r == s) return 1;
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends