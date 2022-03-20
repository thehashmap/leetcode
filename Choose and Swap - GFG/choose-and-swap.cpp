// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        map<char, bool> hit;

        // mark the existence of each character
        for (char c : a)
        	hit[c] = true;
        	
        // for each character in string a, 
        for (char c : a)
        {
        	for (char d = 'a'; d < c; ++d)
        	{
        		// if there exists a character *d* which is smaller than the current character *c*, 
        		if (hit[d])
        		{
        			// swap the every *d* and *c*, then return.
        			for (char &cc : a)
        			{
        				if (cc == d)
        					cc = c;
        				else if (cc == c)
        					cc = d;
        			}
        			
        			return a;
        		}
        	}
        	
        	// if there is no such *d*, then it means the current *c* is small enough, 
        	// we remove the mark, so that this *c* won't be swapped in future operations.
        	hit[c] = false;
        }
        
        return a;
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends