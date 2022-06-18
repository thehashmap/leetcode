// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:

    int helper(vector<vector<int>> matrix, int r, int c, int xd, int yd){
        if(r < 0 || r >= matrix.size() || c < 0 || c >= matrix[0].size()) return -1e9;
        if(r == xd && c == yd) return 0;
        if(matrix[r][c] == 0) return -1e9;
        matrix[r][c] = 0;
        int right = helper(matrix, r, c + 1, xd, yd);
        int left = helper(matrix, r, c - 1, xd, yd);
        int down = helper(matrix, r + 1, c, xd, yd);
        int up = helper(matrix, r - 1, c, xd, yd);
        right = max(right, left);
        up = max(up, down);
        matrix[r][c] = 1;
        return 1 + max(up, right);
    }
    
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        if(matrix[xs][ys] == 0 || matrix[xd][yd] == 0) return -1;
        return helper(matrix, xs, ys, xd, yd);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends