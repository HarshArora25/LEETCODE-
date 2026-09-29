class Solution {
// private:
//   int help(int n,vector<int>&dp){
//     if(n<=2) return dp[n];
//     if(dp[n] !=0) return dp[n]
//     return dp[n]=help(n-1,dp)+help(n-2,dp);
//   }
public:
    int climbStairs(int n) {
         if(n<=2) return n;
      vector<int>dp(n+1,0);
      dp[0]=1;
      dp[1]=1;
      dp[2]=2;
      for(int k=3;k<=n;k++){
      dp[k]=dp[k-1]+dp[k-2];
      }
    return dp[n];
    }
};