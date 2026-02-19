class Solution {
private:
  int helpme(vector<int>& prices,int n,int cap,int i,int buy, vector<vector<vector<int>>>&dp){
    if(cap==0) return 0;
    if(i==n) return 0;
    if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
    if(buy)
       return dp[i][buy][cap]= max(-prices[i]+helpme(prices,n,cap,i+1,0,dp) , helpme(prices,n,cap,i+1,1,dp));
    else
        return dp[i][buy][cap]=max(prices[i]+helpme(prices,n,cap-1,i+1,1,dp) , helpme(prices,n,cap,i+1,0,dp));
  }
public:
    int maxProfit(int k,vector<int>& prices) {
      int n=prices.size();
      int buy=1;
      vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1,-1)));
      return helpme(prices,n,k,0,1,dp);
    }
};