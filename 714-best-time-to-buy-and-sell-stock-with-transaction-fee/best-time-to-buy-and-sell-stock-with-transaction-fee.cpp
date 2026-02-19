class Solution {

    //memo
// private:
//     int help(vector<int>& prices,int n, int fee,int i,int buy,  vector<vector<int>>&dp){
//        if(i==n) return 0;
//        if(dp[i][buy] !=-1) return dp[i][buy];
//        if(buy){
//         return dp[i][buy]=max(-prices[i]+help(prices,n,fee,i+1,0,dp), help(prices,n,fee,i+1,1,dp));
//        }
//        else{
//         return dp[i][buy]=max (prices[i] -fee+ help(prices,n,fee,i+1,1,dp) , help(prices,n,fee,i+1,0,dp));
//        }
//     }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        //  tabulation
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<2;j++){
                if(j){
                    dp[i][j]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                }
                else
                dp[i][j]=max(prices[i]-fee+dp[i+1][1],dp[i+1][0]);
            }
        }
        return dp[0][1];
    }
};