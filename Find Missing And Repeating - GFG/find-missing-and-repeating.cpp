// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int prr[n+1];
       fill(prr,prr+n+1,0);
       for(int i=0;i<n;i++)
       {
           prr[arr[i]]+=1;
       }
       int rep;
       int mis;
       for(int i=1;i<n+1;i++)
       {
           if(prr[i]==2)
           {
               rep=i;
           }
           else if(prr[i]==0)
           {
               mis=i;
           }
       }
       int *rr;
       rr=new int[2];
       rr[0]=rep;
       rr[1]=mis;
       return rr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends