class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> ms;
        unordered_map<char, int> mp;
        stringstream str(s);
        string word;
        int cnt = 0;
        while(str >> word) {
            if(cnt == pattern.size() || mp[pattern[cnt]] != ms[word]) return false;
            mp[pattern[cnt]] = ms[word] = cnt + 1;
            cnt++;
        }
        return cnt == pattern.size();
    }
};