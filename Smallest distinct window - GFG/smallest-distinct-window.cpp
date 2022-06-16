// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        int ans = INT_MAX, start = 0, end = 0, n = str.size();
        map<char,int> mp;
        set<char> st;
        for(auto c : str) st.insert(c);
        int cnt = st.size();
        while(end < n){
            mp[str[end]]++;
            while(mp.size() == cnt){
                int window = end - start + 1;
                ans = min(ans, window);
                mp[str[start]]--;
                if(mp[str[start]] == 0) mp.erase(str[start]);
                start++;
            }
            end++;
        }
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends