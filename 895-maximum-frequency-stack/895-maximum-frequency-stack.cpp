class FreqStack {
public:
   
    
    FreqStack() {
    
    }
     unordered_map<int,int> freq;   // stores the element and its frequencies
     unordered_map<int,stack<int>> mp;  //stores elements freq and elements in the stack
     int mx_freq = 0;
    
    void push(int val) {
        mx_freq = max(mx_freq,++freq[val]); //updating the max frequency of val
        mp[freq[val]].push(val);            //store freq of val and push it into the stack
    }
    
    int pop() {
        int pop_val = mp[mx_freq].top(); // extracting max freq element stack
        mp[mx_freq].pop();   //pop the most frequent element from stack
        
        //if max frequency value is not less than 0, we'' reduce it by 1
        if(!mp[freq[pop_val]--].size() )
            mx_freq --;
        
        return pop_val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */