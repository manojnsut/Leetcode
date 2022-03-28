class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n  = nums.size();
        int start = 0, end = n -1;  
        
        while(start<=end) {
    
         int mid = start + (end - start) / 2;
            
          if ( target == nums[mid] || target == nums[start] || target == nums[end])
               return true;
            
          if (target < nums[mid] && target > nums[mid])
                 end = mid - 1;
            
          else if (target > nums[mid] && target < nums[end])
                 start = mid + 1;
            
          else 
              start++ , end--;
                
       }     
        return false;       
    }
};