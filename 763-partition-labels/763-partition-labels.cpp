class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        int start = 0, end = 0;
        for(int i = 0; i < s.size(); ++i) {
            end = max(end,(int)s.find_last_of(s[i]));
            if( i == end) {
                  res.push_back(end-start + 1); 
                  start = end + 1;
            }      
                      
        }
      return res;
    }
};