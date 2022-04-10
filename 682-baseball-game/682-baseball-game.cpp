class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        
        
            for(auto& ch: ops) {
               if(ch == "C")
                   st.pop();
                else if(ch == "D") {
                    int x = st.top();
                    st.push(2*x);
                }
                else if(ch == "+") {
                    int x = st.top(); st.pop();
                    int y = st.top(); st.push(x);
                    st.push(x + y);
                }
                else
                    st.push(stoi(ch));
            }
        
        
        long long sum = 0;
        while(!st.empty()) {
            sum+= st.top();
            st.pop();
        }
      
        return sum;
    }
};