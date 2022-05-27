// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
 public:
   vector<int> numAndDen(int n, int d) {
       // code here
       int a=10000;
       int b=10000;
       double t=(double)n/d;
       double m=0;
       int nu,den;
       while(a>0)
       {
           double f = (double)a/b;
           if(f>=t)
           {
               a--;
           }
           else
           {
               if(f>m && __gcd(a,b)==1)
               {
                   m=f;
                   nu=a;
                   den=b;
               }
               b--;
           }
       }
       return {nu,den};
   }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        Solution ob;
        vector<int>ans=ob.numAndDen(n,d);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends