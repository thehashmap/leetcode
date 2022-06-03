// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        vector<long long> series;
        series.push_back(S);
        
        long long sum = S;
        for(long long i=0; i<N; i++) {
            if(sum+A[i] > X) break;
            series.push_back(sum+A[i]);
            sum += series[i+1];
        }
        
        while(X) {
            if(series.empty()) break;
            if(series.back() <= X)
                X -= series.back();
            series.pop_back();
        }
        
        return !X;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends