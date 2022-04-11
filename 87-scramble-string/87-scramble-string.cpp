class Solution {
public:
    unordered_map<string,int> mp;
    
    bool isScramble(string s1, string s2) {
    int n = s1.size() , m = s2.size();
        
    //both strins are empty
    if ( n == 0 && m == 0)
        return 1;
    //both string are same 
    if( s1.compare(s2) == 0)
        return 1;
    // one of the string is emepty 
    if( n <= 1)
        return 0;
    
    string temp = s1 + " " + s2;
    //dp call
    if(mp.find(temp) != mp.end())
         return mp[temp];

    int scramble = 0;
    int cond1 = 0, cond2 = 0;
 
    for(int i = 1; i <= n - 1; i++) {
        //case 1: swap
        if( isScramble( s1.substr(0,i), s2.substr(n-i,i)) == 1  && isScramble( s1.substr(i,n-i),s2.substr(0,n-i)) == 1)
              cond1 = 1;
        //case 2: not swap
        if ( isScramble(s1.substr(0,i), s2.substr(0,i)) == 1 && isScramble(s1.substr(i,n-i),s2.substr(i,n-i))==1)
             cond2 = 1;

        if ( cond1 || cond2) {
              scramble = 1;
              break;
        }
    }

    return mp[temp] = scramble;
    }
    
};