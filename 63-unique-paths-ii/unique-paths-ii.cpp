class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i>=m || j>=n || obstacleGrid[i][j]==1) return 0;
        else if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int down=helper(obstacleGrid,m,n,i+1,j,dp);
        int right=helper(obstacleGrid,m,n,i,j+1,dp);
        return dp[i][j]=right+down;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1) return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(obstacleGrid,m,n,0,0,dp);
    }
};