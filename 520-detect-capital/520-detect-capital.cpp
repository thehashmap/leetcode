class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(n == 1){
            return true;
        }
        int cnt = 0;
        for(int i = 1;i<n;i++){
            if(isupper(word[i])) cnt++;
        }
        return (cnt == 0) || (cnt == n - 1 && isupper(word[0]));
    }
};