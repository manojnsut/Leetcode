class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        // step 1:calculate difference of initial 2 element
        // step 2: check if there is same differencee for consecutive element
        // if so then increase cnt else repeat above steps
        
        if(nums.size()<3) return 0;

        int cnt = 0;
        
        for(int i = 0; i < nums.size() - 2; ++i) {
            int prev_diff = nums[i+1] - nums[i];
            //increase count if consecutive elements have same diff
            for(int j = i + 2; j < nums.size(); ++j) {
                int curr_diff = nums[j] - nums[j-1];
                if(curr_diff == prev_diff)
                    ++cnt;
                else
                     break;
            }
        }
        return cnt;
    }
    
};