class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0 , score = 0;     
        
        for(int i = 1; i < s.size(); ++i) {
            
            if(s[i] == '(' ) {
                ++depth; 
            } else {
                if( s[i] == ')' && s[i-1] == '(')
                      score += 1 << depth;
                 --depth;
               
            }
        }
        
        return score;
    }
};