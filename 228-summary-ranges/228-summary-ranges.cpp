class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(!nums.size()) return res;
        int i , j;
        for(i = 0; i < nums.size();++i ) {
            string temp = "";
            j = i;
           while(j + 1< nums.size() && nums[j+1]  == nums[j]+1)
               j++;
           if(j >i){
               temp+=to_string(nums[i]);
               temp+="->";
               temp+=to_string(nums[j]);
           }
           else
               temp+=to_string(nums[i]);
            res.push_back(temp);
           i = j;
        }
       return res;       
    }
};