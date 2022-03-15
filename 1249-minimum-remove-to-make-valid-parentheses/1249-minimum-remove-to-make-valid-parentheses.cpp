class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res ="";
        stack <char> st;
        
        for(int i = 0; i < s.size(); ++i) {
            //add only lowercase alphabet to resultant string
            if(s[i] >= 97 && s[i] <= 122)
                res += s[i];
            
            else if(s[i] == ')' && st.empty() == true)
                continue;
            
            else if(s[i] == '('){
                st.push(s[i]); res += s[i];
            } 
            
            else {
                if(s[i] == ')' && st.top() == '(') {
                    st.pop(); res += s[i];
                }
            }
            
            
        }
        
        // if stack is not empty then we'll pop the invalid parenthesis of type '('
        if(!st.empty()) {
            
           stack<char> st1;
           string res1 = "";
            
           for(int i = res.size()-1; i >= 0; --i) {
               
               if(res[i] >= 97 && s[i] <= 122)
                    res1 += res[i]; 
               
               else if(res[i] == '(' && st1.empty() == true)
                        continue;
               
               else if(res[i] == ')'){
                    st1.push(res[i]); res1 += res[i];
               } 
               
               else {
                  if(res[i] == '(' && st1.top() == ')') {
                      st1.pop(); res1 += res[i];
                 }
              } 
               
           }
            
            reverse(res1.begin(),res1.end());
            return res1;
        }      
        
        
       return res;
    }
};