class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans = INT_MAX;
        bool flag = false;
        set<int> st;
        map<int,int> mp;
        for(int i = 0;i<cards.size();i++){
            if(st.count(cards[i])){
                ans = min(ans, i - mp[cards[i]] + 1);
                mp[cards[i]] = i;
                flag = true;
            }
            st.insert(cards[i]);
            mp[cards[i]] = i;
        }
        if(!flag) return -1;
        return ans;
    }
};