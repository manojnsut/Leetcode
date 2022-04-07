class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        // we run the loop until at most one stone is 
         while (pq.size() > 1) {
         	 // we pop the element and destory it if both are equal
             int x = pq.top(); pq.pop();
             int y = pq.top(); pq.pop();
             // if both both stone are not equal then we push the diference of the stone weight
             if( x != y)
                 pq.push(x-y);
         }
         
       return pq.size() ? pq.top() : 0;
    }
};