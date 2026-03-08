class Solution {
    int help( vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid,int m,int n,int i,int j){
         if(i>=n || j>=m || obstacleGrid[i][j]==1) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int down=help(dp,obstacleGrid,m,n,i+1,j);
        int right=help(dp,obstacleGrid,m,n,i,j+1);
        return dp[i][j]=right+down;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid[0].size();
       int n= obstacleGrid.size();
       vector<vector<int>>dp(n+1,vector<int>(m,-1));
       return help(dp,obstacleGrid,m,n,0,0);
    }
};