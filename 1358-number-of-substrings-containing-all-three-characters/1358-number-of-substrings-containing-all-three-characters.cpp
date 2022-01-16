class Solution {
public:
    int numberOfSubstrings(string s) {
        int start = 0 , end = 0, ans = 0;
        int cnt[] = {0, 0, 0};
        while(end < s.size()){
            cnt[s[end] - 'a']++;
            while(cnt[0] && cnt[1] && cnt[2]){
                cnt[s[start++] - 'a']--;
            }
            ans += start;
            end++;
        }
        return ans;
    }
};