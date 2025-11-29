class Solution {
public:
        int func(vector<vector<int>>& obstacleGrid,int m,int n,int i,int j,vector<vector<int>>&dp){
             if(i>m || j>n ||obstacleGrid[i][j]==1 ) return 0;
            if(i==m && j==n) return 1;
            if(dp[i][j] != -1) return dp[i][j];
            int l=func(obstacleGrid,m,n,i+1,j,dp);
            int r=func(obstacleGrid,m,n,i,j+1,dp);
            return dp[i][j]=l+r;

        }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(obstacleGrid,m-1,n-1,0,0,dp);
    }
};