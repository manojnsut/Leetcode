class Solution {
public:
    void dfs(vector<vector<int>>& adj,int i,int j){
        adj[i][j]=0;
        for(int k=0;k<adj.size();k++)
             if(adj[j][k]==1)
                 dfs(adj,j,k);
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count =0;
        
        for(auto i=0;i<isConnected.size();i++){
            for(auto j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]==1){
                      count++;
                      dfs(isConnected,i,j);
                }
            }
        }
        return count;
    }
};