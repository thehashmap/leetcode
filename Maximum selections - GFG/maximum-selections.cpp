// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        vector<pair<int,int>> arr;
        for(auto &a : ranges){
            arr.push_back(make_pair(a[1],a[0]));
        }
        sort(arr.begin(),arr.end());
        int ans = 0, prev = 0;
        for(auto &a : arr){
            if(prev <= a.second){
                ans++;
                prev = a.first;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends