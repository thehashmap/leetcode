// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int GCD(int a, int b)
    {
        if (a==0)
            return b;
        if (b == 0)
            return a;
        return a>b ? GCD(a-b, b) : GCD(a, b-a);
    }

    int maxBinTreeGCD(vector<vector<int>> arr, int N) {
        sort(arr.begin(), arr.end());
        int prevParent = INT_MIN;
        int prevChild = INT_MIN;
        int maxGCD = 0;
        for (auto& edge : arr)
        {
            int parent = edge[0];
            int child = edge[1];
            if (parent == prevParent)
                maxGCD = max(maxGCD, GCD(child, prevChild));
            prevParent = parent;
            prevChild = child;
        }
        return maxGCD;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,u,v;
        cin>>N;
        
        vector<vector<int>> arr;
        
        for(int i=0; i<N-1; i++)
        {
            cin>>u>>v;
            vector<int> edge;
            edge.push_back(u);
            edge.push_back(v);
            arr.push_back(edge);
        }

        Solution ob;
        cout << ob.maxBinTreeGCD(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends