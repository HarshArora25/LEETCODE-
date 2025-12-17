class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       int left=1e9,uppr=1e9;
       vector<vector<long long>> dp(n, vector<long long>(m, -1)); 
       dp[n-1][m-1]=grid[n-1][m-1];
      for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
        if(i==n-1 && j==m-1) continue;

        long long right = (j+1 < m) ? dp[i][j+1] : 1e9;
        long long down  = (i+1 < n) ? dp[i+1][j] : 1e9;

        dp[i][j] = grid[i][j] + min(right, down);
    }
}
     return dp[0][0];
    }
};
