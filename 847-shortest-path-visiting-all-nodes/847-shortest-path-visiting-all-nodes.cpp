class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        // n = number of nodes in a graph
        int n = graph.size();
        // endmask --it is final state, after all nodes are visited 
        int endmask = (1 << n) -1;
        // visited data structure to check which nodea are visited or not
        vector<vector<bool>> vis(n,vector<bool> (1 << n, false));
        
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; ++i) {
            q.push({i, 1 << i});
            vis[i][1 << i] = true;
        }
        
        int path_len = 0;
        
        // bfs to find shortest path 
        
        while(!q.empty()){
            int size = q.size();
            
            // for each 
            for(int i = 0; i < size; ++i){
                auto [node , state] = q.front();
                q.pop();
                // for each neighbor
                for(auto next: graph[node]) {
                    // updating path 
                    int next_state = state | (1 << next); 
                    // if all nodes are visited
                    if ( next_state == endmask)
                         return path_len + 1;
                    if(!vis[next][next_state]) {
                        q.push({next,next_state});
                        vis[next][next_state] = true;
                    }
                }
            }
            ++path_len; 
        }
        return 0;
    }
};