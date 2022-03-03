class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        
        int prev_diff = nums[1] - nums[0];
        int total_cnt = 0 , cnt = 0;
        
        for(int i = 2; i < nums.size(); ++i) {
            int curr_diff = nums[i] - nums[i-1];
            //increase count if consecutive elements have same diff
            if ( curr_diff == prev_diff) {
                ++cnt; 
            } else {
                cnt  = 0;
                prev_diff = nums[i] - nums[i-1];
            }
            total_cnt += cnt;
        }
        
        return total_cnt;
    }
    
};