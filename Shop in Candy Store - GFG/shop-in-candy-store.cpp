// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int mn = 0;
        int temp  = N;
        for(int i=0;i<N;i++){
            mn+=candies[i];
            N=N-K;
        }
        sort(candies,candies+temp,greater<int>());
        int mx = 0;
        for(int i=0;i<temp;i++){
            mx+=candies[i];
            temp=temp-K;
        }
        vector<int>ans;
        ans.push_back(mn);
        ans.push_back(mx);
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends