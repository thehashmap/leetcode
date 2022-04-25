// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        // code here
        map<int,int> mx, my;
        map<pair<int,int>,int> mxy;
        
        for(int i = 0;i<N;i++){
            mx[X[i]]++;
            my[Y[i]]++;
            mxy[{X[i],Y[i]}]++;
        }
        
        int xans = 0, yans = 0, xyans = 0;
        for(auto it : mx){
            int p = it.second;
            xans += (p*(p-1)/2);
        }
        for(auto it : my){
            int p = it.second;
            yans += (p*(p-1)/2);
        }
        for(auto it : mxy){
            int p = it.second;
            xyans += (p*(p-1)/2);
        }
        
        return xans + yans - 2*xyans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends