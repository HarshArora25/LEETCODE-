class Solution {
private:
  int help(int n, vector<int>&dp){
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n] !=-1) return dp[n];
    int left=help(n-1,dp);
    int right=help(n-2,dp);
    return dp[n]= left+right;
  }
public:
    int climbStairs(int n) {
    vector<int>dp(n+1,-1);
      help(n,dp);  
      return dp[n];
    }
};