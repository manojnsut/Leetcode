class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int n = people.size();
       sort(people.begin(),people.end());
       int boat = 0 , i = 0, j = n-1;;
        
        while( i <= j) {
           int sum = people[i] + people[j];
           if( sum <= limit)
               ++i;
           --j; ++boat;
       }
      return boat;
    }
};

// 3 3 4 5