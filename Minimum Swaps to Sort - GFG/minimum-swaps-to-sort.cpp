// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>>v;
    	int n=nums.size();
    	for(int i=0 ;i<n;i++){
    	    
    	   v.push_back({nums[i],i});
    	
    	}
    	int ans=0;
    	sort(v.begin(),v.end());
    	
    	for(int i=0 ;i<n;i++){
    	    
    	    if(i==v[i].second){
    	        continue;
    	    }
    	    else{
    	        ans++;
    	       swap(v[i],v[v[i].second]);
    	    
    	        i--;//this is done to check the current element which is swapped .
    	    }
    	
    	}
    	return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends