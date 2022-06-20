// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    long posIntSol(string s)
    {
        int x=s.find('='), n = (x+1)/2;
        int k = stoi(s.substr(x+1));
        // We need to calculate K-1Cn-1 or K-1Ck-n
        int r = min(k-n,n-1);
        n=k-1;
        if(r<0)
            return 0;
        long ans=1;
        for(int i=n-r+1;i<=n;i++)
            ans*=i;
        for(int i=2;i<=r;i++)
            ans/=i;
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends