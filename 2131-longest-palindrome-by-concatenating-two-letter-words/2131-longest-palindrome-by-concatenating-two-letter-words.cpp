class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        map<string,int> mp;
        for(auto s : words){
            mp[s]++;
        }
        bool flag = false;
        int ans = 0;
        for(auto p : mp){
            string s = p.first;
            string r = s;
            reverse(r.begin(), r.end());
            if(s != r){
                int cnt = min(mp[s] , mp[r]);
                ans += cnt;
                mp[s] -= cnt;
                mp[r] -= cnt;
            }
            else {
                ans += mp[s]/2;
                if(mp[s] % 2) flag = true;
                mp[s] = 0;
            }
        }
        ans *= 4;
        if(flag) ans += 2;
        return ans;
    }
};