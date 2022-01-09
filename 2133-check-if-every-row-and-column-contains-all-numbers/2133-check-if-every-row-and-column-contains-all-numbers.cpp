class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        set<int> horz , vert;
        for(int i = 0;i<n;i++){
            for(int k = 1;k<=n;k++){
                horz.insert(k);
                vert.insert(k);
            }
            for(int j = 0;j<n;j++){
                horz.erase(matrix[i][j]);
                vert.erase(matrix[j][i]);
            }
            if(horz.size() || vert.size()) return false;
        }
        return true;
    }
};