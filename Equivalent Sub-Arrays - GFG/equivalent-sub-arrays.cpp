// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        map<int,int> mp;
        int dist = 0;
        for(int i = 0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]] == 1) dist++;
        }
        int start = 0, end = 0, ans = 0;
        mp.clear();
        while(end < n){
            mp[arr[end]]++;
            // if(mp.size() == dist) ans++;
            while(mp.size() == dist){
                mp[arr[start]]--;
                if(mp[arr[start]] == 0) mp.erase(arr[start]);
                start++;
                ans += (n - end);
            }
            
            end++;
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends