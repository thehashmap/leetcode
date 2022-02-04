// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
   vector<string> findPrefixes(string arr[], int n)
   {
       vector<string>d;
       map<string,int>m;
       string ans="";
       for(int i=0;i<n;i++)
       {    string h=arr[i];
           ans="";
           //string a="";
           for(int j=0;j<h.length();j++)
           {  ans+=h[j];
           int c=0;
                   for(int k=0;k<n;k++)
                {
                    string l=arr[k];
                    
                    if(ans==l.substr(0,j+1))
                    {
                        c++;
                        if(c>1)
                        break;
                    }
                }
                if(c==1)
                {
                    d.push_back(ans);
                    break;
                }
           }   
       }
       return d;
   }
   
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}
  // } Driver Code Ends