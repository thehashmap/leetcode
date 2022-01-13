class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        int ans = 1 ,end = points[0][1];
        for(auto p : points){
            if(p[0] > end){
                ans ++;
                end = p[1];
            }
            else{
                end = min(end , p[1]);
            }
        }
        return ans;
    }
};