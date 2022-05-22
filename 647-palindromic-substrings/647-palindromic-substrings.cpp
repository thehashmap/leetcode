class Solution {
public:
    
    // Brute force solution :
    
//     bool isPalindrome(string s){
//         int n = s.size();
//         int i = 0 , j = n-1;
//         while(i<=j){
//             if(s[i] != s[j]) return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
    
//     int countSubstrings(string s) {
//         int n = s.size();
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             for(int j = i;j<n;j++){
//                 string r = s.substr(i , j - i + 1);
//                 if(isPalindrome(r)) ans++;
//             }
//         }
//         return ans;
//     } 
    
    // Efficient solution :
    // In the following code, when we consider the substring s[i-j, ..., i+j], i is the middle index of the substring; When we consider the substring s[i-1-j, ..., i+j], (i-1, i) is the middle index of the substring.
    int countSubstrings(string s){
        int n = s.size() , ans = 0;
        for(int i = 0;i<n;i++){
            //odd length substring
            for(int j = 0; i-j >= 0 && i + j < n && s[i-j] == s[i+j];j++) ans++;
            //even length substring
            for(int j = 0; i-j-1 >= 0 && i+j < n && s[i-j-1] == s[i+j];j++) ans++;
        }
        return ans;
    }
};