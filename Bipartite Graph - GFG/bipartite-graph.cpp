// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bipartiteDFS(int V, vector<int>adj[], vector<int>& color, int v){
        if(color[v] == -1) color[v] = 1;
        for(auto u : adj[v]){
            if(color[u] == -1){
                color[u] = 1 - color[v];
                if (!bipartiteDFS(V, adj, color, u)) return false;
            }
            else{
                if(color[u] == color[v]) return false;
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V+1, -1);
	    for(int i = 0;i<V;i++){
	        if(color[i] == -1){
	            if (!bipartiteDFS(V, adj, color, i)) return false;
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends