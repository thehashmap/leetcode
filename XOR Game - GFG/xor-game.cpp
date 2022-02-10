// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int xorCal(int k){
        // code here
        if(k%2==0){
            return -1;
        }
        
        if(k==1){
            return 2;
        }
        
        int l = log2(k);
        int a = 1,b = 0,carry = 1;
        for(int i=1;i<=l;i++){
            if(carry){
                if((1<<i)&k){
                    if((k>>(i+1))){
                        a += (1<<i);
                    }
                    else{
                        carry = 0;
                        b += (1<<i);
                    }
                }
                else{
                    return -1;
                }
            }
            else{
                if((1<<i)&k){
                    return -1;
                }
            }
        }
        
        return a;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends