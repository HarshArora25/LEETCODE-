class Solution {
private:
    bool helper(vector<vector<char>>&grid,int i,int j,int n,int m,int count,      vector<vector<vector<int>>>& dp){
       if(i>=n || j>=m || count<0) return false;
       if(grid[i][j]=='(')
       count++;
       else
       count--;

       if(count<0) return false;
       if(dp[i][j][count] !=-1) return dp[i][j][count];
       if(i==n-1 && j==m-1) return dp[i][j][count]=count==0;
       return dp[i][j][count]=helper(grid,i+1,j,n,m,count,dp) || helper(grid,i,j+1,n,m,count,dp);
    }
public:
    bool hasValidPath(vector<vector<char>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
       if ((m + n - 1) % 2 != 0 || grid[0][0] == ')' || grid[n - 1][m - 1] == '(') {
            return false;
        }
       int i=0;
       int j=0;
       int ct=0;
             vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(
                m,
                vector<int>(n + m, -1)
            )
        );

    //    vector<int>nr={-1,0,1,0};
    //    vector<int>nc={0,1,0,-1};
      return  helper(grid,i,j,n,m,ct,dp); 
    }
};