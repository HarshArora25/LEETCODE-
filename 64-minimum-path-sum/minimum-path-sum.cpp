class Solution {
public:
     int findkro(vector<vector<int>>& grid, int m, int n, int i, int j, vector<vector<int>>& dp) {

    if (i >= m || j >= n) return INT_MAX;

    if (i == m - 1 && j == n - 1)  
        return dp[i][j] = grid[i][j];

    if (dp[i][j] != -1) return dp[i][j];

    int down = findkro(grid, m, n, i + 1, j, dp);
    int right = findkro(grid, m, n, i, j + 1, dp);

    return dp[i][j] = grid[i][j] + min(down, right);
}

    int minPathSum(vector<vector<int>>& grid) {
      int m=grid.size();
      int n=grid[0].size();
      vector<vector<int>>dp(m,vector<int>(n,-1));
      return findkro(grid,m,n,0,0,dp);  
     
    }
};