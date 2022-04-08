class KthLargest {
public:
    // min heap to store element such that kth largest will be at top
    priority_queue<int,vector<int>,greater<int>> pq;
    int kk;
    
    KthLargest(int k, vector<int>& nums) {   
        kk = k;
        for(int x: nums)
            add(x);
    }
    
    int add(int val) {
        //we store only k elements in the min heap
        if(pq.size() < kk)
            pq.push(val);
        
        else {
            //if value is larger than top element than we push the element
            if(val > pq.top() ){
                 pq.pop();
                 pq.push(val);
            }  
        }
        //return the kth largest element
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */