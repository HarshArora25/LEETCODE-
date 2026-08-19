class Solution {
private:
   int res(int n,int m,vector<vector<int>>&dp){
    if(n==0 && m==0) return 1;
    if(n<0 || m<0) return 0;
    if(dp[m][n] !=0) return dp[m][n];
    int up=res(n-1,m,dp);
    int left=res(n,m-1,dp);
    return dp[m][n]=up+left;
   } 
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
    return res(n-1,m-1,dp);    
    }
};