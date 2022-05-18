// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

    vector<string> res;
    void solve(int i,string &s){
        if(i>=s.size()){
            res.push_back(s);
            return;
        }
        if(s[i]!=' ' and s[i-1]!=' '){
            s.insert(i," ");
            solve(i+2,s);
            s.erase(i,1);
        }
        solve(i+1,s);
    }
    vector<string> permutation(string s){
        solve(1,s);
        return res;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends