class Solution {
    private:
    int helper(int amount,vector<int>&coins,int index,vector<vector<int>>&dp){
         if(amount==0) return 1;
        if(index<0) return 0;
        if(dp[index][amount] !=-1 ) return dp[index][amount];
        if(coins[index]>amount)
        return dp[index][amount]=helper(amount,coins,index-1,dp);
        else
        return dp[index][amount]=helper(amount-coins[index],coins,index,dp)  + helper(amount,coins,index-1,dp);
    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
      return  helper(amount,coins,n-1,dp);
    }
};