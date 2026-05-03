class Solution {
// private:
//     int helpme(int i,int j,int n,vector<vector<int>>& triangle,vector<vector<int>>&dp){
//     if (i==n-1) return dp[i][j]=triangle[i][j];
//     if(dp[i][j] !=-1) return dp[i][j];
//     int left=helpme(i+1,j,n,triangle,dp);
//     int right=helpme(i+1,j+1,n,triangle,dp);
//     return dp[i][j]=triangle[i][j]+min(left,right);
//     }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
     int n=triangle.size();
     vector<vector<int>>dp(n,vector<int>(n,-1));
     for(int i=n-1;i>=0;i--)
     dp[n-1][i]=triangle[n-1][i];
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
         dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
        }
     }
       return dp[0][0];
    }
};