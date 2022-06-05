// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool totalSpeed(long n, long m, long l, long h[], long a[], long hours){
        long total = 0;
        for(int i = 0;i<n;i++){
            long currSpeed = h[i] + (a[i] * hours);
            if(currSpeed >= l) total += currSpeed;
            if(total >= m) return true;
        }
        return total >= m;
    }
    
    long buzzTime(long n, long m, long l, long h[], long a[])
    {
        // code here
        long low = 0, high = INT_MAX, ans = 0;
        while(low <= high){
            long mid = low + (high - low)/2;
            if(totalSpeed(n,m,l,h,a,mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends