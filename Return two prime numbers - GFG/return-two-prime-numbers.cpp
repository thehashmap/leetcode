// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        int arr[N + 1] = {0};
        // 0 means prime
        for(int i = 2; i <= N; i++){
            if(arr[i] == 1){
                continue;
            }
            for(int j = i*i; j <= N; j += i){
                arr[j] = 1;
            }
        }
        for(int i = 2; i <= (N+1)/2; i++){
            if(arr[i] == 0 && arr[N-i] == 0){
                return {i, N - i};
            }
        }
        return {0, 0};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends