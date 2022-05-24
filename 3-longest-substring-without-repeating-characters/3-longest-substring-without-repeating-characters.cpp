class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       // No repeating characters == All unique characters
        int ans = 0, i = 0, j = 0;
        unordered_map<char,int> mp;
        while(j < s.size()){
            mp[s[j]]++;
            if(mp.size() == j - i + 1){
                ans = max(ans, j - i + 1);
                j++;
            }
            else {
                while(mp.size() < j - i + 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
            cout << i << " " << j << " " << ans << endl;
        }
        return ans;
    }
};