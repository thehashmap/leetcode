// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
   
   public:
   int transfigure (string A, string B)
   {
    // Your code goes here
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        sum-=B[i];
    }
    if(sum!=0)
    {
        return -1;
    }
    
    int i=A.length();
    int j=B.length();
    int count=0;
    while(i>=0 && j>=0)
    {
        if(A[i]!=B[j])
        {
            i--;
            count++;
        }
        else
        {
            i--;
            j--;
        }
    }
    return count;
   }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends