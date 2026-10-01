class Solution {
// private:
//  int help(vector<vector<int>>& triangle,int n,int i,int j,vector<vector<int>>&dp){
//     if(i==n-1) return triangle[i][j];
//     if(dp[i][j] !=-1) return dp[i][j];
//     int down=triangle[i][j]+help(triangle,n,i+1,j,dp);
//     int downryt=triangle[i][j]+help(triangle,n,i+1,j+1,dp);
//     return dp[i][j]=min(down,downryt);
//  }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
     int n=triangle.size();
     vector<vector<int>>dp(n,vector<int>(n,-1e9));
     for(int i=0;i<n;i++)
     dp[n-1][i]=triangle[n-1][i];
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
        }
     }
     return dp[0][0]; 
    }
};