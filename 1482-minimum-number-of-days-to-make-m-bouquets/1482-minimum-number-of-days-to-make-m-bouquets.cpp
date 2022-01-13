class Solution {
public:
    bool check(vector<int>& b, int m, int k, int mid){
        int flow = 0, bouq = 0;
        for(int i = 0;i<b.size();i++){
            if(b[i] > mid) flow = 0;
            else if(++flow >= k) {
                bouq++;
                flow = 0;
            }
        }
        return bouq >= m;
    }
    
    int minDays(vector<int>& b, int m, int k) {
        int n = b.size();
        if(n / k < m) return -1;
        int low = *min_element(b.begin(), b.end());
        int high = *max_element(b.begin(), b.end());
        while(low < high){
            int mid = low + (high - low) / 2;
            if(check(b, m, k, mid)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};