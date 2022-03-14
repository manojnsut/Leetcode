class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack <string> s;
        string res;
        
        // we will not push "/" on to the stack
        for(int i = 0; i < n; i++) {    
            if(path[i] == '/')
                continue;         
             string str;
            //push the string into the stack if path[i] != -/
            while( i < n && path[i] != '/')
                str += path[i++];
            // if ".." then we pop 
            if(str == ".") continue;
            else if(str == "..") {
                if(s.size() > 0)
                    s.pop();
            }
            else
                s.push(str);     
            
        }
        
        //final string building
        while(s.size()) {
            res = "/" + s.top() + res;
            s.pop();
        }
        
        if ( res.size() == 0)
            return "/";
        
        return res;
    }
};