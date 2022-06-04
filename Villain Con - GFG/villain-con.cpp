// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
        int ans;
        vector<int> indegree(N+1,0);
        vector<int> adj[N+1];
        queue<pair<int,int> > q; // the second int stores the iteration (Color) no for given node
        
            for(int i=0;i<M;i++){
                adj[mat[i][1]].push_back(mat[i][0]);
                indegree[mat[i][0]]++;
            }
        for(int i=1;i<=N;i++)
            if(!indegree[i])
                q.push({i,1});
        while(!q.empty()){
            int x=q.front().first;
            ans=q.front().second;
            q.pop();
            for(auto it: adj[x])
                if(!--indegree[it])
                    q.push({it,ans+1});
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends