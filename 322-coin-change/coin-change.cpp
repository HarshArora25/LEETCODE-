class Solution {
public:
    int helper(vector<int>&coins,int amount,int n, vector<vector<int>>&dp){
      if(amount==0) return 0;
      if(n<0) return 1e9;
      if(dp[n][amount]!=-1) return dp[n][amount];
      int nottake=helper(coins,amount,n-1,dp);
      int take=1e9;
      if(coins[n]<=amount)
      take=1+helper(coins,amount-coins[n],n,dp);
      return dp[n][amount]= min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
    int n=coins.size();
    vector<vector<int>>dp(n,vector<int>(amount+1,-1));
    int ans=helper(coins,amount,n-1,dp);
     return (ans >= 1e9) ? -1 : ans;
         }
};