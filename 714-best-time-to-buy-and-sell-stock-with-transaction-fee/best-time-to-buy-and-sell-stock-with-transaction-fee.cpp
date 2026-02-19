class Solution {
private:
    int help(vector<int>& prices,int n, int fee,int i,int buy,  vector<vector<int>>&dp){
       if(i==n) return 0;
       if(dp[i][buy] !=-1) return dp[i][buy];
       if(buy){
        return dp[i][buy]=max(-prices[i]+help(prices,n,fee,i+1,0,dp), help(prices,n,fee,i+1,1,dp));
       }
       else{
        return dp[i][buy]=max (prices[i] -fee+ help(prices,n,fee,i+1,1,dp) , help(prices,n,fee,i+1,0,dp));
       }
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
       return  help(prices,n,fee,0,1,dp);
    }
};