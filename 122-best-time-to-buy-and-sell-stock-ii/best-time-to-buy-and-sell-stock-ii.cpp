class Solution {
// private:
//       int helpme(vector<int>& prices,int n,int i,int buy,vector<vector<int>>&dp){
    //     if(i==n) return 0;
    //     if(dp[i][buy] !=-1) return  dp[i][buy];
    //     if(buy){
    //       return dp[i][buy]=max( -prices[i] + helpme(prices,n,i+1,0,dp) , helpme(prices,n,i+1,1,dp));
    //     }
    //     else
    //         return dp[i][buy]=max(prices[i] + helpme(prices,n,i+1,1,dp) , helpme(prices,n,i+1,0,dp));
    //   }
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      vector<vector<int>>dp(n+1,vector<int>(2,0));
    //   return helpme(prices,n,0,1,dp); 
      for(int i=n-1;i>=0;i--){
        for(int j=0;j<2;j++){
            if(j){
             dp[i][j]=max(-prices[i]+dp[i+1][0], dp[i+1][1]);   
            }
            else
            dp[i][j]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
        }
     }
      return dp[0][1];
    }
};