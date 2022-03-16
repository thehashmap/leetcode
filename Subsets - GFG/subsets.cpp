// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
       vector<vector<int> >ans;
       void generate(vector<int>&subset,int i,vector<int>&A)
       {
           // Base condition
           if(i==A.size())
           {
               ans.push_back(subset);
               return;
           }
           
           // if ith element ko include nhi krte hai
           
           generate(subset,i+1,A);
           
           // if ith element ko include krte hai
           subset.push_back(A[i]);
           
           generate(subset,i+1,A);
           
           subset.pop_back();
       }
       vector<vector<int> > subsets(vector<int>& A)
       {
           //code here
           vector<int>subset;
           generate(subset,0,A);
           
           sort(ans.begin(),ans.end());
           return ans;
       }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends