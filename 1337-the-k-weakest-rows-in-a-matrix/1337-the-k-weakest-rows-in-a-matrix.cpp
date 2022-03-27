class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
           int n=mat.size();
           vector<pair<int,int>> v;
            for (int i=0;i<n;i++){
                v.push_back({count(mat[i].begin(), mat[i].end(), 1),i});
            }
            sort(v.begin(),v.end());
            vector<int> ans;
            int i=0;
            while(i<k){
                ans.push_back(v[i].second);
                i++;
            }
            return ans;
    }
};

 