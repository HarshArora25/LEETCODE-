class Solution {
private:
     int helper(vector<vector<int>>&grid,int n,int m,int i,int j,int j2,vector<vector<vector<int>>>&dp){
    if(j<0 || j>=m || j2<0 || j2>=m) return -1e8;
     if(i==n-1){
      if(j==j2) return grid[i][j];
      else return grid[i][j]+grid[i][j2];
     }
     if(dp[i][j][j2] !=-1e8) return dp[i][j][j2];
     int maxi=0;
     for(int r=-1;r<=1;r++){
        for(int c=-1;c<=1;c++){
            int value=0;
           if(j==j2)
           value=grid[i][j];
           else
           value=grid[i][j]+grid[i][j2];
           value+=helper(grid,n,m,i+1,j+r,j2+c,dp);
           maxi=max(maxi,value);
           dp[i][j][j2]=maxi;
        }
     }
      return dp[i][j][j2];
     }
public:
    int cherryPickup(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1e8)));
      return helper(grid,n,m,0,0,m-1,dp);  
    }
};