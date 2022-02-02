// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        // code here
        int i = 1;
        int pos= 0;
        int set = 0;
        while(n){
            if(n&1){
                set++;
                if(set > 1)
                    return -1;
                pos= i;
            }
    
            i++;
            n = n>>1;
        }
        if(pos == 0)
            return -1;
            
        return pos;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends