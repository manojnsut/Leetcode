class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size() ;
        int l = 0 ,r = n;
        stack<int> st;
  
        for(int i = 0; i < n; ++i) {
            st.push(pushed[i]);
            
            while(!st.empty() && l < r && st.top() == popped[l]) {
               l++; st.pop();
            } 
            
            if(l == r)
                return true;
        }
        
        return false;
        
    }
};