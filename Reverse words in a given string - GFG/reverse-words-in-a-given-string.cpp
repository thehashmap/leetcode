// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> st;
        string res;
        for(auto c : S){
            if(c == '.'){
                st.push(res);
                res = "";
                continue;
            }
            res += c;
        }
        
        if(res != "") st.push(res);
        S = "";
        while(st.size()){
            string s = st.top();
            st.pop();
            S += s;
            S += ".";
        }
        S.pop_back();
        return S;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends