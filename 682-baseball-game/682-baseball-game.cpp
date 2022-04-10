class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        int ans = 0;
        for(auto c : ops){
            if(c == "C"){
                score.pop_back();
            }
            else if(c == "D"){
                score.push_back(2 * score.back());
            }
            else if(c == "+"){
                score.push_back(score.back() + score[score.size() - 2]);
            }
            else score.push_back(stoi(c));
        }
        ans = accumulate(score.begin(), score.end(), 0);
        return ans;
    }
};