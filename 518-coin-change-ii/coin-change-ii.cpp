class Solution {
private:
    int help(vector<int>& coins,int idx, vector<vector<int>>&dp,int amount){
        if(amount==0) return 1;
        if(idx==coins.size()) return 0;
        if(dp[idx][amount] !=-1) return dp[idx][amount] ;
        int nottake=help(coins,idx+1,dp,amount);
        int take=0;
        if(coins[idx]<=amount)
        take=help(coins,idx,dp,amount-coins[idx]);
        return dp[idx][amount]=take+nottake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
      vector<vector<int>>dp(n,vector<int>(amount+1,-1));
      return help(coins,0,dp,amount);  
    }
};