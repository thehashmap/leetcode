// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        vector<int> setbits(n), sorted;
        for(int i=0; i<n; i++)
            setbits[i] = __builtin_popcount(arr[i]);
            
        for(int k=31; k>=0; k--) {
            for(int i=0; i<n; i++) {
                if(setbits[i] == k)
                    sorted.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++) arr[i] = sorted[i];
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends