// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int cnt = 0, ans = 0;
        while(b){
            b &= (b - 1);
            cnt++;
        }
        for(int i = 31;i>=0 && cnt > 0;i--){
            if((a & (1 << i)) > 0){
                ans += (1 << i);
                cnt--;
            }
        }
        for(int i = 0;i<=31 && cnt > 0;i++){
            if((a & (1 << i)) == 0){
                ans += (1 << i);
                cnt--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends