class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> leftmax(n) , rightmax(n);
        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            
            if(st.empty()) leftmax[i] = 0;
            else leftmax[i] = st.top() + 1;
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i = n - 1;i>=0;i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            
            if(st.empty()) rightmax[i] = n - 1;
            else rightmax[i] = st.top() - 1;
            st.push(i);
        }
        
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans , heights[i] * (rightmax[i] - leftmax[i] + 1));
        }
        
        return ans;
    }
};