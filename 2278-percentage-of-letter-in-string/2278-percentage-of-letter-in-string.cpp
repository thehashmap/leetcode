class Solution {
public:
    int percentageLetter(string s, char letter) {
        int ans = 0, cnt = 0;
        for(auto c : s){
            if(c == letter) cnt++;
        }
        ans = (cnt * 100) / s.size();
        return ans;
    }
};