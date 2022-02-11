// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        bool flag = true;
        string ans ="";
        int count = 0;
        int length = 0;
        for(int i=0;i<s.length();i++)
        {
            if(flag == true and (s[i]=='0' or s[i]=='.')){
                if(s[i]=='.'){
                    ans+='0';
                    ans+='.';
                }
                continue;
            }
            else{
                flag = false;
                if(s[i]=='.'){
                    flag = true;
                }
                ans+=s[i];
                
            }
        }
//=======Encountering last leading zeroes if all are zeroes==
        int ct=0;
        int c0=0;
        for(int i = ans.length()-1; i>=0 ; i--)
        {
            ct++;
            if(ans[i] == '.')break;
            if(ans[i] == '0')c0++;
            
        }
        string temp;
        if(c0!=ct){
            for(int i = 0; i< ans.length() ; i++)
            {
                temp+=ans[i];
            }
        }
        else{
            for(int i = 0; i<= ans.length()-ct+1 ; i++)
            {
                temp+=ans[i];
            }
        }
        if(c0 == ct-1)temp+='0';
        
        return temp;
    }
    
};


// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends