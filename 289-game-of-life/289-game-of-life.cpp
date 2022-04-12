class Solution {
private: 
     int count_neighbors(vector<vector<int>>& board, int i, int j, int m, int n) {
        int cnt = 0;        
        for (int I = max(i-1, 0); I < min(i + 2, m); ++I)
            for (int J = max(j - 1, 0); J < min(j + 2, n); ++J) {
                if(i == I && j == J) continue;
                
                if(board[I][J] == 1 || board[I][J] == 3)
                    cnt++;
            }
                 
        return cnt;
    }
    
public: 
    
    void gameOfLife(vector<vector<int>>& board) {    
        vector<vector<int>> temp = board;
	    int m = board.size(), n = board[0].size();   
        
	    for(int i = 0; i<m; ++i) {
            
		    for(int j = 0; j<n; ++j) {
                
        	    int current_live = count_neighbors(temp, i, j, m, n); 
                
			    if(board[i][j] == 0 && current_live  == 3)
					board[i][j] = 1; 
                
			    else if(board[i][j] == 1 && (current_live  < 2 || current_live  > 3))
					board[i][j] = 0;
			
		  }
	   }
        
    }
};