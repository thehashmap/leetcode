// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	void dfs(int s, int d, int& ans, vector<int>adj[]){
        if(s == d){
            ans++;
            return ;
        }
        for(auto it : adj[s]){
            dfs(it, d, ans, adj);
        }
    }

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<int> adj[15];
	    for(int i = 0;i<edges.size();i++){
	        adj[edges[i][0]].push_back(edges[i][1]);
	    }
	    int ans = 0;
	    dfs(s, d, ans, adj);
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends