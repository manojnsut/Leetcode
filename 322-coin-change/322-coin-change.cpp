class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size(), w = amount;
        
        vector<vector<int>> dp(n+1,vector<int> (w+1,0));
    
        
        
        for(int i=0;i<w+1;i++)
             dp[0][i]=INT_MAX-1;
        
         for(int i=1;i<n+1;i++)
             dp[i][0]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(coins[i-1]<=j)
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
       
            
       return dp[n][w] > amount ? -1 : dp[n][w];
    }
};