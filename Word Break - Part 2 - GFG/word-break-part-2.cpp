// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void breaks(set<string>& st, string s, vector<string>& ans, string res){
        if(s.size() == 0){
            res.pop_back();
            ans.push_back(res);
            return ;
        }
        
        for(int i = 0; i < s.size(); i++){
            string check = s.substr(0, i + 1);
            if(st.count(check)){
                check += " ";
                breaks(st, s.substr(i + 1), ans, res + check);
            }
        }
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        vector<string> ans;
        string res = "";
        set<string> st;
        for(auto str : dict){
            st.insert(str);
        }
        breaks(st, s, ans, res);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends