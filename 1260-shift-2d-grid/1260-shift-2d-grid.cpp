class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<int> v;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m ; j++) {
                v.push_back(grid[i][j]);
            }
        }
        
        k = k % (n*m);
        rotate(v.begin(),v.begin() + v.size() - k,v.end());
        int r = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m ; j++) {
                grid[i][j] = v[r++];
            }
        }
        
        return grid;
    }
};