class Solution {
// private:
//   int helpme(vector<int>& prices,int n,int cap,int i,int buy, vector<vector<vector<int>>>&dp){
//     if(cap==0) return 0;
//     if(i==n) return 0;
//     if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
//     if(buy)
//        return dp[i][buy][cap]= max(-prices[i]+helpme(prices,n,cap,i+1,0,dp) , helpme(prices,n,cap,i+1,1,dp));
//     else
//         return dp[i][buy][cap]=max(prices[i]+helpme(prices,n,cap-1,i+1,1,dp) , helpme(prices,n,cap,i+1,0,dp));
//   }
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int cap=2;
      int buy=1;
      vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3,0)));
       for(int idx=0; idx<n; idx++){
        for(int buy=0; buy<2; buy++){
            dp[idx][buy][0]=0;
        }
       }
      for(int i=n-1; i>=0; i--){
        for(int buy=0; buy<2; buy++){
            for(int cap=1; cap<3; cap++){
        if(buy)
        dp[i][buy][cap]= max(-prices[i]+dp[i+1][0][cap], dp[i+1][1][cap]);
        else
        dp[i][buy][cap]=max(prices[i]+dp[i+1][1][cap-1] , dp[i+1][0][cap]);
            }
        }
      }
      return dp[0][1][2];
    }
};