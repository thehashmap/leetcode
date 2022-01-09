class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        set<char> st;
        vector<int> ans;
        int cnt = 0, k = p.size();
        for(auto c : p){
            mp[c]++;
            st.insert(c);
        }
        cnt = mp.size();
        for(int i = 0;i<k;i++){
            if(st.count(s[i])){
                mp[s[i]]--;
                if(mp[s[i]] == 0) cnt--;
            }
        }
        if(cnt == 0) ans.push_back(0);
        for(int i = k;i<s.size();i++){
            if(st.count(s[i - k])) {
                if(mp[s[i - k]] == 0) cnt++;
                mp[s[i - k]]++;
            }
            if(st.count(s[i])){
                mp[s[i]]--;
                if(mp[s[i]] == 0) cnt--;
            }
            if(cnt == 0) ans.push_back(i - k + 1);
        }
        return ans;
    }
};