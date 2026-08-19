

class Solution {
// private:
//    int res(int n,int m,vector<vector<int>>&dp){
//     if(n==0 && m==0) return 1;
//     if(n<0 || m<0) return 0;
//     if(dp[m][n] !=0) return dp[m][n];
//     int up=res(n-1,m,dp);
//     int left=res(n,m-1,dp);
//     return dp[m][n]=up+left;
//    } 
public:
     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
          // First column
          if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1) return 0;
          dp[0][0]=1;
        for(int i = 1; i < m; i++) {
            if(obstacleGrid[i][0] == 1)
                dp[i][0] = 0;
            else
                dp[i][0] = dp[i-1][0];
        }

        // First row
        for(int j = 1; j < n; j++) {
            if(obstacleGrid[0][j] == 1)
                dp[0][j] = 0;
            else
                dp[0][j] = dp[0][j-1];
        }
       
    // return res(n-1,m-1,dp);  
    

    
        for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(obstacleGrid[i][j]==1) dp[i][j]=0;
           else  dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
     }
      return dp[m-1][n-1];
    }
};