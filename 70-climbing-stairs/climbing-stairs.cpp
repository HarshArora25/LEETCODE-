class Solution {
public:
    int find(vector<int>&dp,int n,int i){
      if(i==n) return 1;
      if(i>n) return 0;
      if(dp[i] !=-1) return dp[i];
      dp[i]=find(dp,n,i+1)+find(dp,n,i+2);
      return dp[i];
    }

    int climbStairs(int n) {
      vector<int>dp(n+2,-1);
      int i=0;
     return find(dp,n,i);  
      
    }
};