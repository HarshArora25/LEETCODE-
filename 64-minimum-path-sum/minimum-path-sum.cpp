class Solution {
public:
     void findkro(vector<vector<int>>& grid, int m, int n, int i, int j, vector<vector<int>>& dp) {
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        int up=0,down=0;
       if(i==0 && j==0) dp[i][j]=grid[i][j];
       else{
        if(i>0) up=dp[i-1][j];
        else up=1e9;
        if(j>0) down=dp[i][j-1];
        else
        down=1e9;
        dp[i][j]=grid[i][j] + min(up,down);
       }
    }
   }
}

    int minPathSum(vector<vector<int>>& grid) {
      int m=grid.size();
      int n=grid[0].size();
      vector<vector<int>>dp(m,vector<int>(n,-1));
       findkro(grid,m,n,0,0,dp); 
      return dp[m-1][n-1] ;
     
    }
};