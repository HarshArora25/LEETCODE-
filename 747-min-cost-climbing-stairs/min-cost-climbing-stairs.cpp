class Solution {
    private:
    int minim(int n,vector<int>&cost,vector<int>&dp){
        if(n<=1) return 0;
        if(dp[n] !=-1) return dp[n];
      return dp[n]= min((cost[n-1]+minim(n-1,cost,dp)),(cost[n-2]+minim(n-2,cost,dp)));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
     int n=cost.size();
     vector<int>dp(n+1,-1);
   return  minim(n,cost,dp);
    }
};