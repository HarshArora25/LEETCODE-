class Solution {
// private:
//   int help(int n, vector<int>&dp){
//     if(n==0) return 1;
//     if(n<0) return 0;
//     if(dp[n] !=-1) return dp[n];
//     int left=help(n-1,dp);
//     int right=help(n-2,dp);
//     return dp[n]= left+right;
//   }
public:
    int climbStairs(int n) {
    vector<int>dp(n+2,-1);
      dp[0]=0;
      dp[1]=1;
      for(int i=2;i<=n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
      }
      return dp[n+1];
    }
};