class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int r = pushed.size() ;
        int l = 0, i = 0;
        
        for(int x: pushed) {  
            pushed[i++] = x;          
            while( i > 0 && pushed[i-1] == popped[l])
               l++ , i--;                
            if(l == r)
                return true;
           }
        
        return false;
        
    }
};