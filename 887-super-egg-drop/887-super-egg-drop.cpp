class Solution {
public:
    int dp[101][10001];
    int solve(int e, int f) {
    //base condition for worst case
    if( f == 0 || f == 1)
        return f;
    // if egg is 1 and considerinng worst case i.e critical break at f floor, then min ways
    if ( e == 1)
        return f;
    
    //dp call
    if( dp[e][f] != -1)
         return dp[e][f];

    int mn = INT_MAX;
    int l = 1, r = f;
        
    while(l <= r) {
        
        int k = (l + r)/2;;
        int left = solve(e-1, k - 1);
        int right = solve(e, f - k);
        // 1 is for 1 attempt and max is used for worst case scenario
        int temp = 1 + max (left,right);
        
        if(left < right)
            l = k + 1;
        else
            r = k - 1;
        
        //for min no of ways
        mn = min ( mn, temp);
    }

    return dp[e][f] = mn;
        
  }
    
    int superEggDrop(int e, int f) {
        memset(dp,-1,sizeof(dp));
        return solve(e, f);
    }
};