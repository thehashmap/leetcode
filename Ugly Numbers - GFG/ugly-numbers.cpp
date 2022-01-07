// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
#define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n)
    {
        // code here
        set<ull> s;
        s.insert(1);

        for (int i = 0; i < n - 1; i++)
        {
            ull num = *s.begin();
            s.erase(s.begin());
            s.insert(num * 2);
            s.insert(num * 3);
            s.insert(num * 5);
        }

        return *s.begin();
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends