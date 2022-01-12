// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    void RecursiveCloneStack(stack<int>& S,stack<int>& Des)
    {
        // Base case for Recursion
        if (S.size() == 0)
            return;
     
        // Stores the top element of the
        // source stack
        int val = S.top();
     
        // Removes the top element of the
        // source stack
        S.pop();
     
        // Recursive call to the function
        // with remaining stack
        RecursiveCloneStack(S, Des);
     
        // Push the top element of the source
        // stack into the Destination stack
        Des.push(val);
    }

    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        RecursiveCloneStack(st, cloned);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends