class Solution {
private:
    int help(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
       if(i>=grid.size() || j>=grid[0].size()) return 1e9;
       if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
       if(dp[i][j]!=-1) return dp[i][j];
       int left=help(grid,i+1,j,dp);
       int ryt=help(grid,i,j+1,dp);
      return dp[i][j]= grid[i][j]+min(left,ryt);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        // if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        return  help(grid,0,0,dp);
        //  return dp[0][0];
    }
};