class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        vector<int> diff(n);
        int res = 0;
        for(int i = 0; i < n; ++i) {
            //cost to send city A
            res += costs[i][0];
            diff[i] = costs[i][1]-costs[i][0];
        }
        sort(diff.begin(),diff.end());
        //cost to send to city B
        for(int i = 0; i < n/2; ++i)
            res += diff[i];
        return res;
    }
};