// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        int char_count[26] = {0};
        int sum = 0;
        for (int i = 0; i < str.length(); i++){
            if (str[i]>='A' && str[i] <='Z')
                char_count[str[i]-'A']++;
            else
                sum = sum + (str[i]-'0');
        }
    
        string res = "";
        for (int i = 0; i < 26; i++){
            char ch = (char)('A'+i);
            while (char_count[i]--)
                res = res + ch;
        }
        if (sum > 0)
            res = res + to_string(sum);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends