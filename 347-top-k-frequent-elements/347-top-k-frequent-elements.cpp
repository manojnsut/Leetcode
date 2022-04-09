class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b){
    return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
           vector<int> res;
           unordered_map<int,int> mp;
        
          //we store the element and its freq in map
           for(int i = 0; i<nums.size();i++)
               mp[nums[i]]++;

          //for sorting the key, element pair we push it in a vector
          vector<pair<int,int>> v; 
          for(auto& i : mp) 
              v.push_back(i);
        
          //now we sort the element on the basis of frequency
          sort(v.begin(),v.end(),cmp);
        
         //return the k most frequent element
          vector<pair<int,int>>::iterator it;
          for(auto it = v.begin(); it < v.begin()+k;it++)
              res.push_back(it->first);
        
           return res;
    }
};