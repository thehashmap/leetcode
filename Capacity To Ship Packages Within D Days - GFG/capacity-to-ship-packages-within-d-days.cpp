// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int low = 0, high = 0;
        for(int i = 0;i < N ;i++){
            low = max(low , arr[i]);
            high += arr[i];
        }
        while(low < high){
            int mid = low + (high - low) / 2;
            if(ispossible(arr, N, D, mid)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
    
    int ispossible(int arr[], int N, int d, int mid){
        int reqd=1, sum=0;
        for(int i=0;i<N;i++)
        {
            if(sum+arr[i]<=mid)
            {
                sum+=arr[i];
            }
            else
            {
                if(arr[i]>mid)
                return false;
                sum=arr[i];
                reqd++;
            }
        }
        return reqd<=d;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends