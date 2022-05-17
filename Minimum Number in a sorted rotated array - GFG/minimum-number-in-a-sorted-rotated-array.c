// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to find the minimum element in sorted and rotated array.
int minNumber(int arr[], int low, int high)
    {
        int mid, ans = arr[0];
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]>=arr[0])
            {
                low=mid+1;
            }
            else
            {
                ans=arr[mid];
                high=mid-1;
            }
        }
        return ans;
    }

// { Driver Code Starts.

int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;++i)
			scanf("%d", &a[i]);	
	
		printf("%d\n", minNumber(a,0,n-1) );
	}
	return 0;
}  // } Driver Code Ends