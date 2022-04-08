class KthLargest {
public:
    priority_queue<int>pq;
    int size;
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(int i = 0;i<nums.size();i++){
            pq.push(nums[i] * (-1));
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val * (-1));
        if(pq.size() > size) pq.pop();
        return pq.top() * (-1);
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */