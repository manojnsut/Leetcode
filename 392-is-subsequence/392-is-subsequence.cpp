class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n = s.size(), m = t.size();
        for(i = 0; i < m; ++i)
              if(s[j] == t[i])
                    ++j;
        return n == j ? true : false;
        
    }
};